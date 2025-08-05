/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:12:56 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/05 12:17:38 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
: AForm("ShrubberyCreationForm", false, 145, 137), target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &a)
: AForm("ShrubberyCreationForm", a.getIsSigned(), 145, 137), target(a.getTarget())
{
	return ;
}

const ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &a)
{
	this->target = a.getTarget();
	this->setIsSigned(a.getIsSigned());
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

void	ShrubberyCreationForm::beSigned(const Bureaucrat &a)
{
	if (this->getIsSigned() == false && a.getGrade() <= this->getGradeSign())
	{
		this->setIsSigned(true);
	}
	else
		throw AForm::GradeTooLowException();
	return ;
}

void		ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getIsSigned() == false && executor.getGrade() <= this->getGradeExec())
	{
		std::string tmp1 = this->target.c_str();
		std::string tmp2 = "_shrubbery";
		std::string str1 = tmp1 + tmp2;
		std::ofstream file(str1.c_str());
		std::string str =
			"   /|\\\n"
			"  / | \\\n"
			" /  |  \\\n"
			"----o----\n"
			"    |\n"
			"    |\n";
		file << str;
		file.close();
	}
	else
		throw AForm::GradeTooLowException();
}



// void	ShrubberyCreationForm::beSigned(const Bureaucrat &a)
// {
// 	if (a.getGrade() >= (int)this->gradeSign)
// 	{
// 		AForm::setIsSigned(true);
// 	}
// 	else if (a.getGrade() < this->gradeSign)
// 	{
// 		throw AForm::GradeTooLowException();
// 	}
// }
