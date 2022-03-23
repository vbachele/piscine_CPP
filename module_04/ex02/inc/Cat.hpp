#ifndef CAT_H
# define CAT_H
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
/************* Canonical form ***************/
	Cat();
	Cat(const Cat &old_obj);
	Cat &operator=(Cat const &obj);
	virtual ~Cat();
/************* member functions ***************/
virtual void makeSound() const;
virtual void train() const; // here i call the function train to give him ideas
virtual void brainScan() const;

private:
	Brain *_brain;
};

#endif