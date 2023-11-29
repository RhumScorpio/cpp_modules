#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    Weapon test;

    test.setType("Weapon type");
    std::cout << test.getType() << std::endl;

    Weapon club("crude spiked club");
	Weapon *club2 = new Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    
    HumanB jim("Jim");
    jim.setWeapon(club2);
    jim.attack();
    club2->setType("some other type of club");
    jim.attack();
    return (0);
}