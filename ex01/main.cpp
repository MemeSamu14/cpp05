/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:09:18 by sfiorini          #+#    #+#             */
/*   Updated: 2025/07/30 16:06:09 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	{
		Bureaucrat	messi("messi", 50);
		Form		champions("champions", false, 20, 30);
	
		try
		{
			messi.signForm(champions);
		}
		catch(const std::exception& e)
		{
			std::cout << "presa" << std::endl;
		}
	}
	{
		Bureaucrat	messi("messi", 50);
		Form		champions("champions", true, 20, 30);
	
		try
		{
			messi.signForm(champions);
		}
		catch(const std::exception& e)
		{
			std::cout << "presa" << std::endl;
		}
	}
	{
		Bureaucrat	messi("messi", 10);
		Form		champions("champions", true, 20, 30);
	
		try
		{
			messi.signForm(champions);
		}
		catch(const std::exception& e)
		{
			std::cout << "presa" << std::endl;
		}
	}
	{
		Bureaucrat	messi("messi", 10);
		Form		champions("champions", false, 20, 30);
	
		try
		{
			messi.signForm(champions);
		}
		catch(const std::exception& e)
		{
			std::cout << "presa" << std::endl;
		}
	}
	return (0);
}
