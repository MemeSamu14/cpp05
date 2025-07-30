/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:12:56 by sfiorini          #+#    #+#             */
/*   Updated: 2025/07/30 18:20:08 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: AForm("ShrubberyCreationForm", false, 145, 137), target(target)
{
	this->target = target;
}

// ShrubberyCreationForm::~ShrubberyCreationForm()
// {
// 	return ;
// }

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

void	ShrubberyCreationForm::beSigned(const Bureaucrat &a)
{
	std::string tmp1 = this->target.c_str();
	std::string tmp2 = "_shrubbery";
	std::string str1 = tmp1 + tmp2;
	std::ofstream file(str1.c_str());
	std::string str =
        "   /|\\\n"      // Note: \\ for backslash
        "  / | \\\n"     // Note: \\ for backslash
        " /  |  \\\n"    // Note: \\ for backslash
        "----o----\n"
        "    |\n"
        "    |\n";
	file << str;
	file.close();
	(void)a;
	return ;
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
