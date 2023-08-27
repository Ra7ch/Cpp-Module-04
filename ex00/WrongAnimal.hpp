/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:23:46 by raitmous          #+#    #+#             */
/*   Updated: 2023/08/27 05:23:47 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP__
#define __WRONGANIMAL_HPP__

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
    std::string type;

public:
    // WrongAnimal default constructor.
    WrongAnimal();
    
    //WrongAnimal Construtor for specific breed
    WrongAnimal(const std::string& breed);

    // WrongAnimal copy constructor.
    WrongAnimal(const WrongAnimal& other);
   
    // WrongAnimal assignement operator.
    WrongAnimal& operator=(const WrongAnimal& other);

    // WrongAnimal type getter.
    std::string getType() const;

    // WrongAnimal sound.
    void makeSound() const;

    // WrongAnimal Distructor.
    virtual ~WrongAnimal();
};

#endif