/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:27:01 by raitmous          #+#    #+#             */
/*   Updated: 2023/08/27 05:27:02 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// WrongCat default constructor.
WrongCat::WrongCat() : WrongAnimal("WrongCat") { std::cout << "WrongCat default Constructor called." << std::endl; }

// WrongCat copy constructor.
WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) { std::cout << "WrongCat copy constructor called." << std::endl; }

// Animal assignement operator.
WrongCat& WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
        WrongAnimal::operator=(other);
    return *this;
}

// WrongCat sound.
void WrongCat::makeSound() const
{
    std::cout << "WrongCat : trying to be mimic a real cat!!" << std::endl;
}

// WrongCat Distructor.
WrongCat::~WrongCat() { std::cout << "WrongCat default destructor called." << std::endl; }
