#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    private:
        std::string type;
    public:
        Animal(void);
        ~Animal();
        std::string getType(void) const;
        void setString(std::string const str);
        void makeSound(void) const;

};

class Dog : public Animal
{
    public :
        Dog(void);
        ~Dog();
        void makeSound(void) const;
};

class Cat : public Animal
{
    public :
        Cat(void);
        ~Cat();
        void makeSound(void) const;
};

#endif