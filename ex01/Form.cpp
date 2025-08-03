/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:45:23 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/03 12:42:51 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, bool isSigned, const int gradeSign, const int gradeExec)
: name(name), isSigned(isSigned), gradeSign(gradeSign), gradeExec(gradeExec)
{
	if (this->gradeSign > 150 || this->gradeExec > 150)
		throw Form::GradeTooLowException();
	else if (this->gradeSign < 1 || this->gradeExec < 1)
		throw Form::GradeTooHighException();
	return ;
}
Form::Form(const Form &a)
: name(a.name), isSigned(a.isSigned), gradeSign(a.gradeSign), gradeExec(a.gradeExec)
{
	return ;
}
const Form& Form::operator=(const Form &a)
{
	this->isSigned = a.isSigned;
	return (*this);
}
Form::~Form()
{
	return ;
}

std::string Form::getName() const
{
	return (this->name);
}

bool Form::getIsSigned() const
{
	return (this->isSigned);
}

int Form::getGradeSign() const
{
	return (this->gradeSign);
}

int Form::getGradeExec() const
{
	return (this->gradeExec);
}

Form::GradeTooHighException::GradeTooHighException()
{
	return ;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too HIGH");
}

Form::GradeTooLowException::GradeTooLowException()
{
	return ;
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too LOW");
}

std::ostream& operator<<(std::ostream& os, const Form& a)
{
	os << a.getName() << ", isSigned: " << a.getIsSigned()
	<< ", grade sign: " << a.getGradeSign() << ", grade exec: " 
	<< a.getGradeExec() << std::endl;
	return os;
}


void	Form::beSigned(const Bureaucrat &a)
{
	if (a.getGrade() >= (int)this->gradeSign)
	{
		this->isSigned = true;
	}
	else if (a.getGrade() < this->gradeSign)
	{
		throw Form::GradeTooHighException();
	}
}
