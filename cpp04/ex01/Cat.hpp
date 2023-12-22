#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{	
	private :
	    Brain *brain;
    public :
        Cat(void);
        Cat(Cat const &copy);
        ~Cat();
        Cat &operator=(Cat const &copy);
        void makeSound(void) const;
        void addIdeas(const int nbOfIdeas) const;
        void showIdeas(void) const;
};

#endif