/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:29:15 by raitmous          #+#    #+#             */
/*   Updated: 2023/08/27 05:29:16 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
    std::string type;
public:
    // Default Constructor.
    AMateria(std::string const &type);

    // Copy Constructor.
    AMateria (const AMateria& other);

    // Copy assignement operator.
    AMateria& operator=(const AMateria& other);

    // Member Functions.
    std::string const &getType() const; // Returns the materia type
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);

    // Default Destructor.
    virtual ~AMateria();
};

#endif
