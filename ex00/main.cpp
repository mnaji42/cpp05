/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 18:38:03 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/08 02:17:57 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
}
