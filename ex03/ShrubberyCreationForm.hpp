/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 03:36:41 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/08 03:39:02 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		//Constructor
		ShrubberyCreationForm();

		//Operator
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &c);

	public:
		//Constructor | Destructor
		ShrubberyCreationForm(std::string target);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &c);

		//Fonctions
		virtual void execute(const Bureaucrat &b) const;
};

#endif
