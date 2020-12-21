/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 18:38:03 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/08 04:52:54 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat b1("Samy", 12);
		std::cout << b1 << std::endl;
		Bureaucrat b2("Toto", -1);
		std::cout << b2 << std::endl;
		Bureaucrat b3("Julien", 150);
		std::cout << b3 << std::endl;
		Bureaucrat b4("Noemie", 800);
		std::cout << b4 << std::endl;
		Bureaucrat b5("Antoine", 0);
		std::cout << b5 << std::endl;
		Bureaucrat b6("Julie", 1);
		std::cout << b6 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n--------------------------\n" << std::endl;
	try
	{
		Bureaucrat b2("Toto", -1);
		std::cout << b2 << std::endl;
		Bureaucrat b3("Julien", 150);
		std::cout << b3 << std::endl;
		Bureaucrat b4("Noemie", 800);
		std::cout << b4 << std::endl;
		Bureaucrat b5("Antoine", 0);
		std::cout << b5 << std::endl;
		Bureaucrat b6("Julie", 1);
		std::cout << b6 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n--------------------------\n" << std::endl;
	try
	{
		Bureaucrat b3("Julien", 150);
		std::cout << b3 << std::endl;
		Bureaucrat b4("Noemie", 800);
		std::cout << b4 << std::endl;
		Bureaucrat b5("Antoine", 0);
		std::cout << b5 << std::endl;
		Bureaucrat b6("Julie", 1);
		std::cout << b6 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n--------------------------\n" << std::endl;
	try
	{
		Bureaucrat b4("Noemie", 800);
		std::cout << b4 << std::endl;
		Bureaucrat b5("Antoine", 0);
		std::cout << b5 << std::endl;
		Bureaucrat b6("Julie", 1);
		std::cout << b6 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n--------------------------\n" << std::endl;
	try
	{
		Bureaucrat b5("Antoine", 0);
		std::cout << b5 << std::endl;
		Bureaucrat b6("Julie", 1);
		std::cout << b6 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n--------------------------\n" << std::endl;
	try
	{
		Bureaucrat b6("Julie", 1);
		std::cout << b6 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n--------------------------\n" << std::endl;
	try
	{
		Bureaucrat b1("Jonny", 1);
		std::cout << "1) " << b1 << std::endl;
		b1.decGrade();
		std::cout << "2) " << b1 << std::endl;
		b1.incGrade();
		std::cout << "3) " << b1 << std::endl;
		b1.incGrade();
		std::cout << "4) " << b1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n--------------------------\n" << std::endl;
	try
	{
		Bureaucrat b1("Batman", 150);
		std::cout << "1) " << b1 << std::endl;
		b1.incGrade();
		std::cout << "2) " << b1 << std::endl;
		b1.decGrade();
		std::cout << "3) " << b1 << std::endl;
		b1.decGrade();
		std::cout << "4) " << b1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n--------------------------\n" << std::endl;
	try
	{
		Bureaucrat b1("Batman", 150);
		std::cout << "1) " << b1 << std::endl;
		b1.incGrade();
		std::cout << "2) " << b1 << std::endl;
		b1.decGrade();
		std::cout << "3) " << b1 << std::endl;
		ShrubberyCreationForm f1("Prout");
		std::cout << "1) " << f1 << std::endl;
		f1.beSigned(b1);
		std::cout << "2)" << f1 << std::endl;
		f1.execute(b1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n--------------------------\n" << std::endl;
	try
	{
		Bureaucrat b1("Batman", 1);
		std::cout << "1) " << b1 << std::endl;
		PresidentialPardonForm f1("Maison");
		std::cout << "1) " << f1 << std::endl;
		f1.beSigned(b1);
		std::cout << "2)" << f1 << std::endl;
		f1.execute(b1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n--------------------------\n" << std::endl;
	try
	{
		Bureaucrat b1("Batman", 150);
		std::cout << "1) " << b1 << std::endl;
		b1.incGrade();
		std::cout << "2) " << b1 << std::endl;
		b1.decGrade();
		std::cout << "3) " << b1 << std::endl;
		PresidentialPardonForm f1("BABAR");
		std::cout << "1) " << f1 << std::endl;
		f1.beSigned(b1);
		std::cout << "2)" << f1 << std::endl;
		f1.execute(b1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n--------------------------\n" << std::endl;
	try
	{
		Bureaucrat b1("Batman", 1);
		std::cout << "1) " << b1 << std::endl;
		b1.incGrade();
		std::cout << "2) " << b1 << std::endl;
		b1.decGrade();
		std::cout << "3) " << b1 << std::endl;
		PresidentialPardonForm f1("BABAR");
		std::cout << "1) " << f1 << std::endl;
		f1.beSigned(b1);
		std::cout << "2)" << f1 << std::endl;
		f1.execute(b1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat b1("Batman", 1);
		std::cout << "1) " << b1 << std::endl;
		ShrubberyCreationForm f1("Maison");
		std::cout << "1) " << f1 << std::endl;
		f1.beSigned(b1);
		std::cout << "2)" << f1 << std::endl;
		f1.execute(b1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}//////////////////////////////////
	std::cout << "\n--------------------------\n" << std::endl;
	try
	{
		Intern I;
		Form *f1;
		f1 = I.makeForm("PresidentialPardonForm", "babar");
		Bureaucrat b1("Batman", 24);
		std::cout << "1) " << b1 << std::endl;
		b1.incGrade();
		std::cout << "2) " << b1 << std::endl;
		b1.decGrade();
		std::cout << "1) " << *f1 << std::endl;
		f1->beSigned(b1);
		std::cout << "2)" << *f1 << std::endl;
		f1->execute(b1);
		delete f1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n--------------------------\n" << std::endl;
	try
	{
		Intern I;
		Form *f1;
		f1 = I.makeForm("PresidentialPardonForm", "babar");
		Bureaucrat b1("Batman", 1);
		std::cout << "1) " << b1 << std::endl;
		std::cout << "3) " << b1 << std::endl;
		std::cout << "1) " << *f1 << std::endl;
		f1->beSigned(b1);
		std::cout << "2)" << *f1 << std::endl;
		f1->execute(b1);
		delete f1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Intern I;
		Form *f1;
		f1 = I.makeForm("ShrubberyCreationForm", "Maison");
		Bureaucrat b1("Batman", 1);
		std::cout << "1) " << b1 << std::endl;
		std::cout << "1) " << *f1 << std::endl;
		f1->beSigned(b1);
		std::cout << "2)" << *f1 << std::endl;
		f1->execute(b1);
		delete f1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
