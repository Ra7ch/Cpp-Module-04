/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:31:03 by raitmous          #+#    #+#             */
/*   Updated: 2023/08/30 04:01:09 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// DEfault Constructor.
MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; ++i)
        sources[i] = NULL;
}

// Copy Constructor.
MateriaSource::MateriaSource(const MateriaSource &other) {
    for (int i = 0; i < 4; ++i) {
        if (other.sources[i])
            sources[i] = other.sources[i]->clone();
        else
            sources[i] = NULL;
    }
}

// Copy assignement operator.
MateriaSource& MateriaSource::operator=(const MateriaSource &other) {
    if (this != &other) {
        for (int i = 0; i < 4; ++i) {
            delete sources[i];
            if (other.sources[i])
                sources[i] = other.sources[i]->clone();
            else
                sources[i] = NULL;
        }
    }
    return *this;
}

// Member Functions.
void MateriaSource::learnMateria(AMateria *m) {
    for (int i = 0; i < 4; ++i) {
        if (!sources[i]) {
            sources[i] = m;
            return;
        }
    }
    delete (m);
}

AMateria* MateriaSource::createMateria(std::string const &_type) {
    for (int i = 0; i < 4; ++i) {
        if (sources[i] && sources[i]->getType() == _type)
            return sources[i]->clone();
    }
    return NULL;
}

// Default Destractor.
MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; ++i)
        delete sources[i];
}
