#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    /*********************** TEST SET UP THE WEAPON ************************/
    Weapon blade = Weapon("Blade");
    std::string name = blade.getType();
    std::cout << name << std::endl;
    /*********************** TEST SET UP THE CHANGE WEAPON'S NAME ************************/
    blade.setType("Sword");
    name = blade.getType();
    std::cout << name << std::endl;
    /*********************** TEST SET UP THE HUMANA ************************/
    HumanA Vincent = HumanA("Vincent", "Blade");
    Vincent.attack();
    /*********************** TEST SET UP THE HUMANB ************************/
    HumanB Antoine = HumanB("Antoine");
    Weapon Balais = Weapon("Balais");
    Antoine.getWeapon(Balais.getType());
    Antoine.attack();
    return (0);
}