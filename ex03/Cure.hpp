/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:29:30 by raitmous          #+#    #+#             */
/*   Updated: 2023/08/27 05:29:31 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
#define __CURE_HPP__

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
    public :

        // DEfault Constructor.
        Cure();

        // Copy Constructor.
        Cure(const Cure& other);

        // Copy assignement operator.
        Cure& operator=(const Cure& other);

        // Member Functions.
        AMateria* clone() const;
        void use(ICharacter& target);

        // Default Destractor.
        ~Cure() {}
};

#endif