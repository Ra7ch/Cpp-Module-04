/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:26:46 by raitmous          #+#    #+#             */
/*   Updated: 2023/08/27 05:26:47 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// WrongAnimal default constructor.
WrongAnimal::WrongAnimal() : type("WrongAnimal") { std::cout << "WrongAnimal default Constructor called." << std::endl; }

// WrongAnimal Construtor for specific breed
WrongAnimal::WrongAnimal(const std::string &breed) : type(breed) { std::cout << "WrongAnimal Constructor called for " << type << "." << std::endl; }

// WrongAnimal copy constructor.
WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type) { std::cout << "WrongAnimal copy constructor called." << std::endl; }

// WrongAnimal assignement operator.
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other)
        type = other.type;
    return *this;
}

// WrongAnimal type getter.
std::string WrongAnimal::getType() const
{
    return type;
}

// WrongAnimal sound.
void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound..." << std::endl;
}

// WrongAnimal Distructor.
WrongAnimal::~WrongAnimal() { std::cout << "WrongAnimal default destructor called." << std::endl; }
