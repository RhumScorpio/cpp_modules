#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
    private :
        std::string name;
        Weapon      weapon;
    public :
        HumanA(std::string name, Weapon weapon);
        HumanA(void);
        ~HumanA();
        void attack(void);
        void setWeapon(Weapon weapon);
};

#endif