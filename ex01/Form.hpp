/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:45:23 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/05 12:14:16 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool isSigned;
		const int gradeSign;
		const int gradeExec;
	public:
		Form(const std::string name, bool isSigned, const int gradeSign, const int gradeExec);
		Form(const Form &a);
		const Form& operator=(const Form &a);
		~Form();

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
		void		beSigned(const Bureaucrat &a);
};

std::ostream& operator<<(std::ostream& os, const Form& a);

#endif