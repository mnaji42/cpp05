/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 03:16:32 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/08 04:47:58 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "Form.hpp"

class RobotomyRequestForm: public Form
{
    private:
		//Constructor
        RobotomyRequestForm();

		//Operator
        RobotomyRequestForm &operator=(const RobotomyRequestForm &c);

    public:
		//Constructor | Destructor
        RobotomyRequestForm(std::string target);
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &c);

		//Fonctions
        virtual void execute(const Bureaucrat &b) const;
};

#endif