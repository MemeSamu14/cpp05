/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:45:23 by sfiorini          #+#    #+#             */
/*   Updated: 2025/07/31 10:19:04 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			gradeSign;
		const int			gradeExec;
	public:
		AForm(const std::string name, bool isSigned, const int gradeSign, const int gradeExec);
		AForm(const AForm &a);
		const AForm& operator=(const AForm &a);
		~AForm();
		class GradeTooHighException: public std::exception
		{
			public:
				GradeTooHighException();
				const char *what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				GradeTooLowException();
				const char *what() const throw();
		};
		std::string	getName() const;
		bool		getIsSigned() const;
		int			getGradeSign() const;
		int			getGradeExec() const;
		void		setIsSigned(bool set){this->isSigned = set;};
		virtual void		beSigned(const Bureaucrat &a) = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& a);

#endif