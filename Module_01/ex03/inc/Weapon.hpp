#ifndef WEAPON_H
# define WEAPON_H 
#include "iostream"

class Weapon {

public:
    Weapon();
    Weapon(std::string name);
    ~Weapon();
    const std::string    &getType();
    void                 setType(std::string name);   

private:
    std::string _type;
};
#endif