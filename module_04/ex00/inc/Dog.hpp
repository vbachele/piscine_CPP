#ifndef DOG_H
# define DOG_H
#include "Animal.hpp"
#include "iostream"

class Dog : public Animal
{
public:
/************* Canonical form ***************/
	Dog();
	Dog(const Dog &old_obj);
	Dog &operator=(Dog const &obj);
	virtual ~Dog();
/************* member functions ***************/
virtual void makeSound() const;

protected:

};

#endif