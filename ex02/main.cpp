/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:09:18 by sfiorini          #+#    #+#             */
/*   Updated: 2025/07/31 12:11:26 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	{
		ShrubberyCreationForm	form("Home");
		Bureaucrat				a("Francesco", 150);
		Bureaucrat				b("Beppe", 5);
	
		try
		{
			// form.execute(a);
			b.executeForm(form);
			// form.execute(b);
		}
		catch (const Bureaucrat::GradeTooLowException &a)
		{
			
		}
	}
	{
		RobotomyRequestForm		form("Garden");
		Bureaucrat				a("Francesco", 150);
		Bureaucrat				b("Beppe", 5);
	
		try
		{
			form.execute(a);
			// form.execute(b);
		}
		catch (const Bureaucrat::GradeTooLowException &a)
		{
			
		}
		
	}
	{
		PresidentialPardonForm	form("American Dream");
		Bureaucrat				a("Francesco", 150);
		Bureaucrat				b("Beppe", 5);
	
		try
		{
			form.execute(a);
			// form.execute(b);
		}
		catch (const Bureaucrat::GradeTooLowException &a)
		{
			
		}
	}
	return (0);
}
