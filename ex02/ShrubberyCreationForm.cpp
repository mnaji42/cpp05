/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 03:34:44 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/08 03:41:42 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

static std::string TREES =
    "            ,@@@@@@@,\n"
    "    ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
    " ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
    ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
    "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
    "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
    "`&%\\ ` /%&'    |.|        \\ '|8'\n"
    "    |o|        | |         | |\n"
    "    |.|        | |         | |\n"
    " \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &c): Form(c)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", target, 145, 137)
{

}

void ShrubberyCreationForm::execute(const Bureaucrat &b) const
{
    if (!isSigned())
        throw Form::FormNotSignedException();
    if (b.getGrade() > 45)
        throw Form::GradeTooLowException();
    std::fstream file;
    file.open((getTarget() + "_shrubbery").c_str(), std::fstream::out);
    file << TREES;
    file.close();
}
