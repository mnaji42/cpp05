/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 04:10:33 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/08 04:44:37 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

//Constructor | Destructor
Intern::Intern()
{

}

Intern::~Intern()
{

}

Intern::Intern(const Intern &I)
{
	(void)I;
}


//Operator
Intern &Intern::operator=(const Intern &I)
{
	(void)I;
	return *this;
}


//Fonctions
Form *Intern::makeForm(std::string name, std::string target)
{
	if (name == "PresidentialPardonForm")
		return this->createPresidentialPardonForm(target);
	else if (name == "RobotomyRequestForm")
		return this->createRobotomyRequestForm(target);
	else if (name == "ShrubberyCreationForm")
		return this->createShrubberyCreationForm(target);
	std::cout << "?? :O ??" << std::endl;
	return NULL;
}

Form *Intern::createPresidentialPardonForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::createRobotomyRequestForm(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form *Intern::createShrubberyCreationForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}
