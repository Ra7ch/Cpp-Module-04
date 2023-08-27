/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:26:09 by raitmous          #+#    #+#             */
/*   Updated: 2023/08/27 05:26:10 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Cat default constructor.
Cat::Cat() : Animal("Cat"), brain(new Brain()) { std::cout << "Cat default Constructor called." << std::endl; }

// Cat copy constructor.
Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain)) { std::cout << "Cat copy constructor called." << std::endl; }

// Animal assignement operator.
Cat &Cat::operator=(const Cat &other)
{
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        new Brain(*other.brain);
    }
    return *this;
}

// Cat sound.
void Cat::makeSound() const
{
    std::cout << "MEOOOOOW!" << std::endl;
}

// Cat Distructor.
Cat::~Cat() {
    delete brain;
    std::cout << "Cat default destructor called." << std::endl;
}
