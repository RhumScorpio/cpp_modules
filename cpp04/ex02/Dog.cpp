#include "Dog.hpp"

Dog::Dog(void) : AAnimal("Dog")
{
    try {
        this->brain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
    }
    std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(Dog const &copy) : AAnimal("Dog")
{
    *this = copy;
}

Dog::~Dog()
{
	delete this->brain;
    std::cout << "Dog destructor" << std::endl;
}

Dog &Dog::operator=(Dog const &copy)
{
    if (this != &copy)
    {
        this->type = copy.type;
        this->brain = new Brain( *copy.brain );
    }
    std::cout << "Dog copy called." << std::endl;
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Waf Waf Waf" << std::endl;
}

void Dog::addIdeas(int const nbOfIdeas) const
{
    for (int i = 0; i < nbOfIdeas; i++)
        this->brain->putIdea(i);
}

void Dog::showIdeas(void) const
{
    this->brain->printIdeas();
}