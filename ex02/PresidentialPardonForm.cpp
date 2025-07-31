/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 11:05:37 by sfiorini          #+#    #+#             */
/*   Updated: 2025/07/31 11:13:56 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
:AForm("PresidentialPardonForm", false, 25, 5), target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &a)
:AForm("PresidentialPardonForm", a.getIsSigned(), 25, 5), target(a.getTarget())
{
	return ;
}

const PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &a)
{
	this->target = a.getTarget();
	this->setIsSigned(a.getIsSigned());
	return (*this);
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->target);
}

void	PresidentialPardonForm::beSigned(const Bureaucrat &a)
{
	if (this->getIsSigned() == false && a.getGrade() >= this->getGradeSign())
	{
		std::cout << target 
		<< " has been pardoned by Zaphod Beeblebrox" << std::endl;
		this->setIsSigned(true);
	}
}
