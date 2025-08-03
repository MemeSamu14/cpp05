/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:09:18 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/03 12:38:27 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat	messi("messi", 50);
		std::cout << "Correct Execution" << std::endl;
		std::cout << messi << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException &a)
	{
		std::cout << a.what() << std::endl;
	}
	try
	{
		Bureaucrat	messi("messi", 350);
		std::cout << "Correct Execution" << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException &a)
	{
		std::cout << a.what() << std::endl;
	}
	try
	{
		Bureaucrat	messi("messi", -50);
		std::cout << "Correct Execution" << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException &a)
	{
		std::cout << a.what() << std::endl;
	}
	return (0);
}
