#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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