/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 18:37:54 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/08 03:46:38 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//Constructor | Destructor
Bureaucrat::Bureaucrat(const std::string name, const unsigned int grade) : _name(name), _grade(grade)
{
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const Bureaucrat &B) : _name(B._name), _grade(B._grade)
{

}


//Operator
// Bureaucrat &Bureaucrat::operator=(const Bureaucrat &B)
// {
// 	if (this != &B)
// 	{
// 		_name = B._name;
// 		_grade = B._grade;
// 	}
// 	return *this;
// }


//Accesseur
const std::string Bureaucrat::getName() const
{
	return _name;
}

unsigned int Bureaucrat::getGrade() const
{
	return _grade;
}


//Fonctions
void Bureaucrat::incGrade()
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void Bureaucrat::decGrade()
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void Bureaucrat::executeForm(const Form &form) const
{
    try
    {
        form.execute(*this);
        std::cout << "<" << _name << "> executs <" << form.getName() << ">" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "<" << _name << "> cannot execute <" << form.getName() << "> because " << e.what() << std::endl;
    }
}


//Execeptions
char const *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "The grade is too high !";
}


char const *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "The grade is too low !";
}


//Operator de flux

std::ostream &operator<<(std::ostream &out ,Bureaucrat &B)
{
	return out << "<" << B.getName() << ">, bureaucrat grade <" << B.getGrade() << ">";
}