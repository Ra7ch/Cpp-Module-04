/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:29:27 by raitmous          #+#    #+#             */
/*   Updated: 2023/08/27 05:29:28 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Default Constructor.
Cure::Cure() : AMateria("cure") {}

// Copy Constructor.
Cure::Cure (const Cure& other) : AMateria(other) {}

// Copy assignement operator.
Cure& Cure::operator=(const Cure& other)
{
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}

// Member Functions.

AMateria* Cure::clone() const {
    return new Cure(*this);
}

void Cure::use(ICharacter& target) {
    std::cout << "Cure: * heals " << target.getName() << "'s wounds *" << std::endl;
}
