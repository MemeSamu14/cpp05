/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:10:31 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/03 12:47:06 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade): name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &a): name(a.getName()), grade(a.grade)
{
	return ;
}

const Bureaucrat& Bureaucrat::operator=(const Bureaucrat &a)
{
	// il nome e' costante non e' possibile uguagliarlo
	this->grade = a.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

const std::string  Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	return ;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too HIGH");
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	return ;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too LOW");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& a)
{
	os << a.getName() << ", bureaucrat grade " << a.getGrade() << std::endl;
	return os;
}

void	Bureaucrat::signForm(AForm& a)
{
	std::string reason = "e' scarso";
	if (a.getIsSigned() == true)
		reason = "e' gia' stata vinta";
	if (a.getIsSigned() == false && this->getGrade() >= a.getGradeSign())
	{
		a.beSigned(*this);
		std::cout << this->getName() << " signed " << a.getName() << std::endl;
	}
	else
	{
		std::cout << this->getName() << " couldn t sign " << a.getName()
		<< " because " << reason << std::endl;
		throw Bureaucrat::GradeTooLowException();
	}
	return ;
}

void		Bureaucrat::executeForm(AForm const &form) const
{
	if (this->grade >= form.getGradeExec())
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	else
	{
		std::cout << "sfigato" << std::endl;
	}
		
}

