/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:29:08 by raitmous          #+#    #+#             */
/*   Updated: 2023/08/27 05:29:09 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Default Constructor.
AMateria::AMateria (const std::string& _type) : type (_type) {}

// Copy Constructor
AMateria::AMateria (const AMateria& other) : type(other.type) {}

// Copy assignement operator.
AMateria& AMateria::operator=(const AMateria& other)
{
    if (this != &other)
        type = other.type;
    return *this;
}

// Member Functions.
std::string const& AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << getType() << ": * uses on " << target.getName() << " *" << std::endl;
}

// Default Destructor.
AMateria::~AMateria() {}