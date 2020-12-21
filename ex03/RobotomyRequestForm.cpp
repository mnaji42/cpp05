/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 03:16:40 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/08 04:47:53 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &c): Form(c)
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", target, 72, 45)
{

}

void RobotomyRequestForm::execute(const Bureaucrat &b) const
{
	if (!isSigned())
        throw Form::FormNotSignedException();
    if (b.getGrade() > 45)
        throw Form::GradeTooLowException();
	std::cout << "Bzzzzzzzzz" << std::endl;
	std::cout << getTarget() << " a ete robotomize !" << std::endl;
}
