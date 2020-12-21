/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 03:08:55 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/08 03:14:39 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//Operator | Destructor

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &c): Form(c)
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", target, 25, 5)
{

}

//Fonctions

void PresidentialPardonForm::execute(const Bureaucrat &b) const
{
	if (!isSigned())
        throw Form::FormNotSignedException();
    if (b.getGrade() > 45)
        throw Form::GradeTooLowException();
	std::cout << getTarget() << " a ete pardonne Zafod Beeblebrox" << std::endl;
}
