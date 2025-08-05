/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:10:31 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/05 12:01:33 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string name;
		int	grade;
	public:
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
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &a);
	const Bureaucrat& operator=(const Bureaucrat& a);
	~Bureaucrat();
	const std::string getName() const;
	int 		getGrade() const;
	void		signForm(AForm& a);
	void		executeForm(AForm const & form) const;
	void	decrement()
	{
		if (this->grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->grade++;
	};
	void	increment()
	{
		if (this->grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->grade--;
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& a);

#endif