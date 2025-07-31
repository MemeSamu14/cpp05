/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:45:23 by sfiorini          #+#    #+#             */
/*   Updated: 2025/07/30 15:50:38 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string name, bool isSigned, const int gradeSign, const int gradeExec)
: name(name), isSigned(isSigned), gradeSign(gradeSign), gradeExec(gradeExec)
{
	if (this->gradeSign > 150 || this->gradeExec > 150)
		throw AForm::GradeTooHighException();
	else if (this->gradeSign < 1 || this->gradeExec < 1)
		throw AForm::GradeTooLowException();
	return ;
}
AForm::AForm(const AForm &a)
: name(a.name), isSigned(a.isSigned), gradeSign(a.gradeSign), gradeExec(a.gradeExec)
{
	return ;
}
const AForm& AForm::operator=(const AForm &a)
{
	this->isSigned = a.isSigned;
	return (*this);
}
AForm::~AForm()
{
	return ;
}

std::string AForm::getName() const
{
	return (this->name);
}

bool AForm::getIsSigned() const
{
	return (this->isSigned);
}

int AForm::getGradeSign() const
{
	return (this->gradeSign);
}

int AForm::getGradeExec() const
{
	return (this->gradeExec);
}

AForm::GradeTooHighException::GradeTooHighException()
{
	return ;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too HIGH");
}

AForm::GradeTooLowException::GradeTooLowException()
{
	return ;
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too LOW");
}

std::ostream& operator<<(std::ostream& os, const AForm& a)
{
	os << a.getName() << ", isSigned: " << a.getIsSigned()
	<< ", grade sign: " << a.getGradeSign() << ", grade exec: " 
	<< a.getGradeExec() << std::endl;
	return os;
}


void	AForm::beSigned(const Bureaucrat &a)
{
	if (a.getGrade() >= (int)this->gradeSign)
	{
		this->isSigned = true;
	}
	else if (a.getGrade() < this->gradeSign)
	{
		throw AForm::GradeTooLowException();
	}
}
