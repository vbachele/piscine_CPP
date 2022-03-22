#ifndef CAT_H
# define CAT_H
#include "Animal.hpp"

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

protected:

};

#endif