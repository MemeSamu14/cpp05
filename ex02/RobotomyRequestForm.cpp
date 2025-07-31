/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 10:21:58 by sfiorini          #+#    #+#             */
/*   Updated: 2025/07/31 11:17:12 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
:AForm("RobotomyRequestForm", false, 72, 45), target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &a)
:AForm("RobotomyRequestForm", a.getIsSigned(), 72, 45), target(a.getTarget())
{
	return ;
}

const RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &a)
{
	this->target = a.getTarget();
	this->setIsSigned(a.getIsSigned());
	return (*this);
}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

void	RobotomyRequestForm::beSigned(const Bureaucrat &a)
{
	std::srand(std::time(NULL));
	int random_number = std::rand();

	if (this->getIsSigned() == false && a.getGrade() >= this->getGradeSign())
	{
		if (random_number >= 50)
		{
			std::cout << "Makes some drilling noises, " << target 
			<< " has been robotomized successfully 50%' of the time" << std::endl;
			this->setIsSigned(true);
		}
		else
			std::cout << "Robotomy Failed" << std::endl;
	}
}
