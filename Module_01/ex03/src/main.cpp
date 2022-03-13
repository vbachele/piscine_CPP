#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    /*********************** SET UP THE WEAPON ************************/
    Weapon blade = Weapon("Blade");
    /*********************** TEST SET UP THE HUMANA ************************/
    HumanA Vincent = HumanA("Vincent", blade);
    Vincent.attack();
    blade.setType("Sword");
    Vincent.attack();
    /*********************** TEST SET UP THE HUMANB ************************/
    HumanB Antoine = HumanB("Antoine");
    Weapon Balais = Weapon("Balais");
    Antoine.getWeapon(Balais);
    Antoine.attack();
    Balais.setType("BROSSE A CHIOTTE");
    Antoine.attack();
    return (0);
}