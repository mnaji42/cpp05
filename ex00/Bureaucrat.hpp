/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 18:37:47 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/08 02:04:10 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat
{
	private:
		const std::string _name;
		unsigned int _grade;

		//Constructor
		Bureaucrat();

		//Operator
		Bureaucrat &operator=(const Bureaucrat &B);

	public:
		//Constructor | Destructor
		Bureaucrat(const std::string name, const unsigned int grade);
		virtual ~Bureaucrat();
		Bureaucrat(const Bureaucrat &B);

		//Accesseur
		const std::string getName() const;
		unsigned int getGrade() const;

		//Fonctions
		void incGrade();
		void decGrade();

		//Execeptions
		class GradeTooHighException: public std::exception
		{
			public:
				virtual char const *what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual char const *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out ,Bureaucrat &B);

#endif