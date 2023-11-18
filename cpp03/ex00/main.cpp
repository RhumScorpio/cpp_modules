#include "ClapTrap.hpp"

int main(void)
{
    std::cout << "Hello" << std::endl;
    ClapTrap one("Bibou");
    ClapTrap two("COCO");
    one.attack("COCO");
    two.takeDamage(one.getDamageValue());
    return (0);
}