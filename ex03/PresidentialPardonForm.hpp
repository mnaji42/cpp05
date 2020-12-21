/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 03:08:48 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/08 03:19:00 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include "Form.hpp"

class PresidentialPardonForm: public Form
{
    private:
        //Constructor
        PresidentialPardonForm();

        //Operator
        PresidentialPardonForm &operator=(const PresidentialPardonForm &c);

    public:
        //Constructor | Destructor
        PresidentialPardonForm(std::string target);
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &c);

        //Fonctions
        virtual void execute(const Bureaucrat &b) const;
};

#endif