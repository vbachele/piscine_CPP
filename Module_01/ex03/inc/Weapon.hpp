#ifndef WEAPON_H
# define WEAPON_H 
#include "iostream"

class Weapon {

public:
    Weapon(std::string name);
    ~Weapon();
    std::string const    getType();
    void                  setType(std::string name);   

private:
    std::string _type;
};
#endif