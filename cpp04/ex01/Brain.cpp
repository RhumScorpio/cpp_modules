#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(Brain const &copy)
{
    *this = copy;
}

Brain::~Brain()
{
    std::cout << "Brain destructor" << std::endl;
}

Brain &Brain::operator=(Brain const &copy)
{
    if ( this != &copy )
    {
        for ( int i = 0; i < 100; i++ )
            this->ideas[i] = copy.ideas[i];
    }
    std::cout << "Brain copy called." << std::endl;
    return (*this);
}

void    Brain::putIdea(int const i)
{
    std::ostringstream oss;
    oss << "Idea nb " << i ;
    this->ideas[i % 100] = oss.str();
}

void Brain::printIdeas(void)
{
    std::cout << "Brain Array" << std::endl;
    for ( int i = 0; i < 100; i++ )
    {
        std::cout << std::setw(4) << i + 1 << std::flush;
        std::cout << "| " << this->ideas[i] << std::endl;
    }
}