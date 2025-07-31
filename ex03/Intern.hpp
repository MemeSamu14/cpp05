/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 13:27:40 by sfiorini          #+#    #+#             */
/*   Updated: 2025/07/31 17:08:29 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"

class AForm;

class Intern
{
private:
public:
	Intern( void ){};
	~Intern( void ){};
	AForm* makeForm(const std::string &name, const std::string &target);
};

#endif