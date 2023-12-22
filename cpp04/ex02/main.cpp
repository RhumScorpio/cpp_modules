#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
    std::cout << "//Dog j" << std::endl;
    const AAnimal* j = new Dog();
    std::cout << "//Cat i" << std::endl;
    const AAnimal* i = new Cat();
    std::cout << "//Cat cat" << std::endl;
    const Cat* cat = new Cat();
    const Cat* neocat = new Cat();
    std::cout << std::endl;

    // test for the abstract class
    // const AAnimal* test = new AAnimal();
    // test->makeSound();

    //testing brain
    neocat->addIdeas(2);
    cat->addIdeas(10);
    cat->showIdeas();

    //testing assignement
    std::cout << "//Testing Assignement Operator" << std::endl;
    delete i;
    i = cat;
    cat = neocat;
    std::cout << std::endl;

    //testing copy constructor
    std::cout << "//CopyCat" << std::endl;
    cat->addIdeas(42);
    const Cat copycat = Cat(*cat);
    std::cout << "//Make copy of " << copycat.getType() << std::endl;
    copycat.showIdeas();
    std::cout << std::endl;

    //testing sounds
    j->makeSound();
    i->makeSound();
    delete j;
    delete i;
    delete cat;
    return 0;
}