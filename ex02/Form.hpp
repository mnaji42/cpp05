/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 02:00:41 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/08 03:51:34 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		const std::string _target;
		bool _signed;
		const int _grade;
		const int _execGrade;

		Form();
		Form &operator=(const Form &c);

	public:
		//Constructor Constructor
		Form(std::string name, std::string target, int grade, int execGrade);
		~Form();
		Form(const Form &F);

		//Accesseur
		const std::string &getName() const;
		const std::string &getTarget() const;
		int getGrade() const;
		int getExecGrade() const;
		bool isSigned() const;

		//Exceptions
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
		class FormNotSignedException: public std::exception
		{
			public:
				virtual char const *what() const throw();
		};

		//Fonctions
		void beSigned(Bureaucrat &bureaucrat);
		virtual void execute(const Bureaucrat &b) const = 0;
};

std::ostream &operator<<(std::ostream &out, const Form &F);

#endif
