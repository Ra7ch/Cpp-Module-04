#ifndef __WRONGCAT_HPP__
#define __WRONGCAT_HPP__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
    // WrongCat default constructor.
    WrongCat();
    
    // WrongCat copy constructor.
    WrongCat(const WrongCat& other) ;
   
    // Animal assignement operator.
    WrongCat& operator=(const WrongCat& other);

    // WrongCat sound.
    void makeSound() const;

    // WrongCat Distructor.
    ~WrongCat();
};

#endif