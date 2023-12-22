#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// static void	cat_brain_overview(void)
// {
// 	// Next line will result to a compilation error because the Class is abstract
// 	// Animal *meta = new Animal();

// 	Animal *cat_alpha = new Cat();

// 	// Populate the brain of the cat
//     cat_alpha->addIdeas(10);
// 	Animal *copyCat = new Cat(*cat_alpha);
// 	delete cat_alpha;
	
// 	// display the brain of the cat
//     copyCat->showIdeas();
// 	delete copyCat;
// }

// static void	dog_brain_overview(void)
// {
// 	// Next line will result to a compilation error because the Class is abstract
// 	// Animal *meta = new Animal();

// 	Animal *dog_alpha = new Dog();

// 	// Populate the brain of the cat
//     dog_alpha->addIdeas(111);
// 	Animal *copyDog = new Dog(*dog_alpha);
// 	delete dog_alpha;
	
// 	// display the brain of the cat
//     copyDog->showIdeas();
// 	delete copyDog;
// }

// static void	subject_test(void)
// {
// 	Animal	*array[100];

// 	// populate the array
	
// 	for (size_t i = 0; i < 100; i++)
// 		(i < 50) ? array[i] = new Dog () : array[i] = new Cat();
	
// 	for (size_t i = 0; i < 100; i++)
// 	{
// 		std::string	idea;

// 		if (i < 50)
// 			idea = "Were is the ball, do we play ?";
// 		else
// 			idea = "Norminet aka Babache is our master";
// 	}

// 	Animal *array_copy[100];

// 	for (size_t i = 0; i < 100; i++)
// 		(i < 50) ? array_copy[i] = new Dog (*array[i]) : array_copy[i] = new Cat(*array[i]);
	
// 	// delete the array 
// 	for (size_t i = 0; i < 100; i++)
// 		delete array[i];

// 	std::cout << "array_copy:\n[" << std::endl;
// 	for (size_t i = 0; i < 100; i++)
// 	{
// 		std::cout
// 		<< array_copy[i]->getType()
// 		<< std::endl;
// 	}
// 	std::cout << "]" << std::endl;
// 	for (size_t i = 0; i < 100; i++)
// 		delete array_copy[i];	
// }

// int	main(void)
// {
// 	(void)cat_brain_overview;
// 	(void)dog_brain_overview;
// 	subject_test();
// 	return (0);
// }
int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Animal* test = new Cat();
    test->addIdeas(142);
    test->showIdeas();
    delete i;
    std::cout << "//Testing Assignement" << std::endl;
    i = test;
    i->showIdeas();
    delete j;
    delete i;

    return 0;
}