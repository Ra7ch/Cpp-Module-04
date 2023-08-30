/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:29:39 by raitmous          #+#    #+#             */
/*   Updated: 2023/08/30 04:18:41 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
#define __ICE_HPP__

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
    public :

        // DEfault Constructor.
        Ice();

        // Copy Constructor.
        Ice(const Ice& other);

        // Copy assignement operator.
        Ice& operator=(const Ice& other);

        // Member Functions.
        AMateria* clone() const;
        void use(ICharacter& target);

        // Default Destractor.
        ~Ice();
};
#endif