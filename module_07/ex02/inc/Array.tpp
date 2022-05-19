
#ifndef TEMPLATE_TPP
# define TEMPLATE_TPP
#include <iostream>

template <typename T>
class Array 
{
public:
	/************* canonical form ***************/
	Array() : _elements(NULL), _nb(0)
	{
		std::cout << "Default constructor called" << std::endl;
	}
	
	Array(unsigned int n) : _elements(new T[n]), _nb(n)
	{
		std::cout << "Constructor with unsigned int called" << std::endl;
	}
	
	Array(const Array &src) : _elements(NULL), _nb(0)
	{
		std::cout << "Copy constructor called" << std::endl;
		*this = src;
	}
	
	virtual ~Array()
	{
		if (this->_elements != NULL)
			delete [] this->_elements;
		std::cout << "Destructor called" << std::endl;
	}
	
/************* operation overload  ***************/

/**** Here we attribute all the elements of src to the new instance, we check if is equal first 
 * + we check if the array has already something to avoid mistakes and leaks ****/
	Array&operator=(const Array &src)
	{
		std::cout << "= Operator constructor called" << std::endl;
		if (this == &src)
			return (*this);
		if (this->_elements != NULL)
			delete [] this->_elements; 
		this->_nb = src.size();
		this->_elements = new T[this->_nb]; 
		for (unsigned int i = 0; i < this->_nb; i++)
			this->_elements[i] = src._elements[i];
		return (*this);
	}
	
	//Allow to access to the right elements of the array
	T &operator [](unsigned int index)
	{
		if (index < 0 || index >= this->size() || this->_elements == NULL) // handle errors
		{
			//std::cout << "WORKS"<< std::endl;
			throw std::exception();
		}
		return (this->_elements[index]);
	}

/************* members functions ***************/
	unsigned int size(void) const
	{
		return (this->_nb);
	}

private:
T 			*_elements;
unsigned 	int _nb;
};

#endif
