#ifndef FORM_H
# define FORM_H
#include "Bureaucrat.hpp"
#include "iostream"

class Form : public Bureaucrat
{
public:
	//   canonical form                            //
	Form(std::string const &name, unsigned int required, unsigned int execute);
	Form(Form const &src);
	~Form();
	std::ostream &operator<<(std::ostream &out, Form const &display);
	Form::operator=(Form const &obj);