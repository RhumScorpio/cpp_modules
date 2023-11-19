#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrongcat = new WrongCat();
    const WrongAnimal* wrong = new WrongAnimal();
    std::cout << "--------------OUTPUT TYPES--------------" << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    std::cout << wrong->getType() << " " << std::endl;
    std::cout << wrongcat->getType() << " " << std::endl;
    std::cout << "--------------OUTPUT SOUNDS--------------" << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    wrong->makeSound();
    wrongcat->makeSound();
    std::cout << "--------------free everything--------------" << std::endl;
    delete i;
    delete j;
    delete meta;
    delete wrong;
    delete wrongcat;
    return (0);
}