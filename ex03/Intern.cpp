/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 13:27:40 by sfiorini          #+#    #+#             */
/*   Updated: 2025/07/31 17:42:28 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

AForm* Intern::makeForm(const std::string &name, const std::string &target)
{
	AForm*	ret = NULL;
	std::string forms[3] = {"PRESIDENTIALPARDONFORM", "ROBOTOMYREQUESTFORM", "SHRUBBERYCREATIONFORM"};
	std::string upperName;
	int	i = 0;
	while (name[i])
	{
		while (name[i] == ' ')
			i++;
		upperName.push_back(std::toupper(name[i]));
		i++;
	}
	i = 0;
	while (upperName != forms[i] && i <= 2)
		i++;
	switch (i)
	{
		case 0:
		{
			ret = new PresidentialPardonForm(target); 
			return (ret);
		}
		case 1:
		{
			ret = new RobotomyRequestForm(target); 
			return (ret);		
		}
		case 2:
		{
			ret = new ShrubberyCreationForm(target); 
			return (ret);
		}
		case 3:
		{
			std::cout << "Error" << std::endl 
			<< "Form dosn't exist" << std::endl;
			return (NULL);
		}
	}
	std::cout << "Intern creates " << name << std::endl;
	return (ret);
}
