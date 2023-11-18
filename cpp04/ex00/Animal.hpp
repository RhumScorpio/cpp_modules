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
        std::string getType(void);
        void setString(std::string const str);
        void makeSound(void);

};

class Dog : public Animal
{
    public :
        Dog(void);
        ~Dog();
        friend void makeSound(void);
};

class Cat : public Animal
{
    public :
        Cat(void);
        ~Cat();
        friend void makeSound(void);
};

#endif