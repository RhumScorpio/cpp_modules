#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private :
	  Brain *brain;
  public :
    static int id;
    Dog(void);
    Dog(Dog const &copy);
    ~Dog();
    Dog &operator=(Dog const &copy);
    void makeSound(void) const;
    void addIdeas(const int nbOfIdeas) const;
    void showIdeas(void) const;
};

#endif