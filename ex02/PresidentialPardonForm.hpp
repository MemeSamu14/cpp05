/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 10:21:58 by sfiorini          #+#    #+#             */
/*   Updated: 2025/07/31 11:59:59 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPPARDONFORM_HPP
# define PRESIDENTIALPPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string target;
public:
	PresidentialPardonForm(const std::string &target);
	~PresidentialPardonForm(){};
	PresidentialPardonForm(const PresidentialPardonForm &a);
	const PresidentialPardonForm& operator=(const PresidentialPardonForm &a);
	void		beSigned(const Bureaucrat &a);
	std::string getTarget() const;
	void	execute(Bureaucrat const &executor) const;
};

#endif