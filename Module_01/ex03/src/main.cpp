#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    /*********************** SET UP THE WEAPON ************************/
    {
        Weapon club = Weapon("crude spiked club");
        /*********************** TEST SET UP THE HUMANA ************************/
        HumanA bob = HumanA("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        /*********************** TEST SET UP THE HUMANB ************************/
        HumanB jim = HumanB("jim");
        jim.getWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return (0);
}