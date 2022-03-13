#ifndef HUMANA_H
# define HUMANA_H
#include "iostream"

class HumanA {

public:
    HumanA(std::string weapon, std::string name);
    ~HumanA();
    void attack();
private:
    std::string _name;
    std::string _weapon;
};
#endif