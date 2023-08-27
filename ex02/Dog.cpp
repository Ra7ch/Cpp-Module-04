/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:27:38 by raitmous          #+#    #+#             */
/*   Updated: 2023/08/27 05:27:39 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Dog default constructor.
Dog::Dog() : Animal("Dog"), brain(new Brain()) { std::cout << "Dog default Constructor called." << std::endl; }

// Dog copy constructor.
Dog::Dog(const Dog &other) : Animal(other), brain(new Brain(*other.brain)) { std::cout << "Dog copy constructor called." << std::endl; }

// Animal assignement operator.
Dog &Dog::operator=(const Dog &other)
{
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        new Brain(*other.brain);
    }
    return *this;
}

// Dog sound.
void Dog::makeSound() const
{
    std::cout << "WOOF! WOOF!" << std::endl;
}

// Dog Distructor.
Dog::~Dog() {
    delete brain;
    std::cout << "Dog default destructor called." << std::endl;
}
