/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 10:21:58 by sfiorini          #+#    #+#             */
/*   Updated: 2025/07/31 11:55:22 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	std::string target;
public:
	RobotomyRequestForm(const std::string &target);
	~RobotomyRequestForm(){};
	RobotomyRequestForm(const RobotomyRequestForm &a);
	const RobotomyRequestForm& operator=(const RobotomyRequestForm &a);
	void		beSigned(const Bureaucrat &a);
	std::string getTarget() const;
	void	execute(Bureaucrat const &executor) const;

};


#endif