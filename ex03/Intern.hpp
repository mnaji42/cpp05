/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 04:10:26 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/08 04:14:01 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class Intern
{
	private:
		//Fonctions
		static Form *createPresidentialPardonForm(std::string target);
        static Form *createRobotomyRequestForm(std::string target);
        static Form *createShrubberyCreationForm(std::string target);

	public:
		//Constructor | Destructor
		Intern();
		~Intern();
		Intern(const Intern &I);

		//Operator
		Intern &operator=(const Intern &I);

		//Fonctions
		Form *makeForm(std::string name, std::string target);

};

#endif