#include "Brain.hpp"
#include <string>

Brain::Brain(void)
{
	this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
		this->ideas[i] = "Empty";
    std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(Brain &copy)
{
	std::string *ref = copy.getIdeas();
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ref[i] + " copy";
	std::cout << "A brain has been copy constructed\n";
}

Brain::~Brain()
{
	delete [] (this->ideas);
    std::cout << "Brain destructor" << std::endl;
}
std::string *Brain::getIdeas(void)
{
    return (this->ideas);
}

Brain &Brain::operator=(Brain const &copy)
{
    for ( int i = 0; i < 100; i++ )
            this->ideas[i] = copy.ideas[i];
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