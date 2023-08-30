/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:31:07 by raitmous          #+#    #+#             */
/*   Updated: 2023/08/30 02:50:51 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria *sources[4];
        //int learned;

    public:
        // DEfault Constructor.
        MateriaSource();

        // Copy Constructor.
        MateriaSource(const MateriaSource &other);

        // Copy assignement operator.
        MateriaSource &operator=(const MateriaSource &other);

        // Member Functions.
        void learnMateria(AMateria *m);
        AMateria *createMateria(std::string const &type);

        // Default Destractor.
        ~MateriaSource();
};

#endif