/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:12:56 by sfiorini          #+#    #+#             */
/*   Updated: 2025/07/31 11:55:05 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &a);
		const ShrubberyCreationForm& operator=(const ShrubberyCreationForm &a);
		~ShrubberyCreationForm(){};
		std::string	getName() const;
		void		beSigned(const Bureaucrat &a);
		std::string getTarget() const;
		void		execute(Bureaucrat const &executor) const;
};



#endif