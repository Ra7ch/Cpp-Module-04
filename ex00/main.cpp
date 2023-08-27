/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:23:26 by raitmous          #+#    #+#             */
/*   Updated: 2023/08/27 05:23:27 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrong = new WrongCat();

    std::cout << j->getType() << " ";
    j->makeSound();

    std::cout << i->getType() << " ";
    i->makeSound();

    std::cout << wrong->getType() << " ";
    wrong->makeSound();

    delete j;
    delete i;
    delete wrong;

    return 0;
}
