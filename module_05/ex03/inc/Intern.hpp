#ifndef INTERN_H
#define INTERN_H
#include "iostream"
#include "Form.hpp"

class Intern{
public:
/***************** Canonical form **************/
	Intern();
	Intern(Intern const &src);
	~Intern();
	Intern &operator=(Intern const &obj);
	Form	*MakeForm(std::string name, std::string target);
	class UnknownFormException : public std::exception
	{
		public:
			virtual const char * what() const throw();
	};
/***************** Member functions **************/
private:
	//On ajoute les 3 fonctions de form ici
	Form	*_Shrubbery(std::string target);
	Form	*_Robotomy(std::string target);
	Form	*_Presidential(std::string target);
};
#endif