#ifndef DOG_H
# define DOG_H
#include "Animal.hpp"
#include "iostream"
#include "Brain.hpp"


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
virtual void train() const;
virtual void brainScan() const;

private:
	Brain *_brain; //allow to create a brain when we create a cat
};

#endif