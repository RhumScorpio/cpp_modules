#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat")
{
    try {
        this->brain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
    }
    std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(Cat const &copy) : AAnimal("Cat")
{
    if (this != &copy)
        *this = copy;
}

Cat::~Cat()
{
	delete this->brain;
    std::cout << "Cat destructor" << std::endl;
}

Cat &Cat::operator=(Cat const &copy)
{
    if (this != &copy)
    {
        this->type = copy.type;
        this->brain = new Brain( *copy.brain );
    }
    std::cout << "Cat copy called." << std::endl;
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Miaaaaaw" << std::endl;
}

void Cat::addIdeas(int const nbOfIdeas) const
{
    for (int i = 0; i < nbOfIdeas; i++)
        this->brain->putIdea(i);
}

void Cat::showIdeas(void) const
{
    this->brain->printIdeas();
}