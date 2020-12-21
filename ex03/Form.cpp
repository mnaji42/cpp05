/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 02:00:34 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/08 04:47:29 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Constructor | Destructor

Form::Form(std::string name, std::string target, int grade, int execGrade): _name(name), _target(target), _signed(false), _grade(grade), _execGrade(execGrade)
{
	if (_grade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
	if (_grade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{

}

Form::Form(const Form &F): _name(F._name), _target(F._target), _signed(F._signed), _grade(F._grade), _execGrade(F._execGrade)
{

}

//Acceseur

const std::string &Form::getName() const
{
	return _name;
}

const std::string &Form::getTarget() const
{
	return _target;
}

int Form::getGrade() const
{
	return _grade;
}

int Form::getExecGrade() const
{
	return _execGrade;
}

// Exception

const char *Form::GradeTooHighException::what() const throw()
{
	return "Form : The grade is too high!";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Form : The grade is too low!";
}

const char *Form::FormNotSignedException::what() const throw()
{
	return "Form : is not signed!";
}


//Fonctions

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if ((const int)bureaucrat.getGrade() > _grade)
		throw Form::GradeTooLowException();
	_signed = true;
}

bool Form::isSigned() const
{
	return _signed;
}

//Operator de flux

std::ostream &operator<<(std::ostream &out, const Form &F)
{
	out << "The form <" << F.getName() << "> needs grade <" << F.getGrade() << "> to be signed, and grade <" << F.getExecGrade() << "> to be executed. ";
	if (F.isSigned())
		out << "She is already signed !";
	else
		out << "She's not signed !";
	return out;
}
