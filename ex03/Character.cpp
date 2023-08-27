/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:29:19 by raitmous          #+#    #+#             */
/*   Updated: 2023/08/27 05:29:20 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Default Constructor.
Character::Character(const std::string& _name) : name (_name) {
    for (int i = 0; i < 4; ++i)
        inventory[i] = NULL;
}

// Copy Constructor.
Character::Character(const Character &other) : name (other.name) {
    for (int i = 0; i < 4; ++i)
    {
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
}

// Copy assignement operator.
Character& Character::operator=(const Character &other) {
    if (this != &other)
    {
        name = other.name;
        for (int i = 0; i < 4; ++i)
        {
            delete inventory[i];
            if (other.inventory[i])
                inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
    }
    return *this;
}

// Member Functions.
std::string const& Character::getName() const {
    return name;
}

void Character::equip(AMateria *m) {
    for (int i = 0; i < 4; ++i) {
        if (!inventory[i]) {
            inventory[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx) {
    if (idx >=0 && idx < 4)
        inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
    if (idx >= 0 && idx < 4 && inventory[idx])
        inventory[idx]->use(target);
}

// Default Destructor.
Character::~Character() {
    for (int i = 0; i < 4; ++i)
        delete inventory[i];
}
