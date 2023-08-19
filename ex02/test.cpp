#include <string>
#include <iostream>

class Animal
{
protected:
    std::string type;

public:
    // Animal default constructor.
    Animal() : type("Animal") { std::cout << "Animal default Constructor called." << std::endl; }
    
    //Animal Construtor for specific breed
    Animal(const std::string& breed) : type(breed) { std::cout << "Animal Constructor called for " << type << "." << std::endl; }
    // Animal copy constructor.
    Animal(const Animal& other) : type(other.type) { std::cout << "Animal copy constructor called." << std::endl; }
   
    // Animal assignement operator.
    Animal& operator=(const Animal& other) {
        if (this != &other)
            type = other.type;
        return *this;
    }

    // Animal type getter.
    std::string getType() const {
        return type;
    }

    // Animal sound.
    virtual void makeSound() const {
        std::cout << "Animal sound..." << std::endl;
    }

    // Animal Distructor.
    virtual ~Animal() { std::cout << "Animal default destructor called." << std::endl; }

};

class Cat : public Animal
{
    public:
    // Cat default constructor.
    Cat() : Animal("Cat") { std::cout << "Cat default Constructor called." << std::endl; }
    
    // Cat copy constructor.
    Cat(const Cat& other) : Animal(other) { std::cout << "Cat copy constructor called." << std::endl; }
   
    // Animal assignement operator.
    Cat& operator=(const Cat& other) {
        if (this != &other)
            Animal::operator=(other);
        return *this;
    }

    // Cat sound.
    void makeSound() const {
        std::cout << "MEOOOOOW!" << std::endl;
    }

    // Cat Distructor.
    ~Cat() { std::cout << "Cat default destructor called." << std::endl; }
};

class Dog : public Animal
{
    public:
    // Dog default constructor.
    Dog() : Animal("Dog") { std::cout << "Dog default Constructor called." << std::endl; }
    
    // Dog copy constructor.
    Dog(const Dog& other) : Animal(other) { std::cout << "Dog copy constructor called." << std::endl; }
   
    // Animal assignement operator.
    Dog& operator=(const Dog& other) {
        if (this != &other)
            Animal::operator=(other);;
        return *this;
    }

    // Dog sound.
    void makeSound() const {
        std::cout << "WOOF! WOOF!" << std::endl;
    }

    // Dog Distructor.
    ~Dog() { std::cout << "Dog default destructor called." << std::endl; }
};


// WrongAnimal Classes ...

class WrongAnimal
{
protected:
    std::string type;

public:
    // WrongAnimal default constructor.
    WrongAnimal() : type("WrongAnimal") { std::cout << "WrongAnimal default Constructor called." << std::endl; }
    
    //WrongAnimal Construtor for specific breed
    WrongAnimal(const std::string& breed) : type(breed) { std::cout << "WrongAnimal Constructor called for " << type << "." << std::endl; }

    // WrongAnimal copy constructor.
    WrongAnimal(const WrongAnimal& other) : type(other.type) { std::cout << "WrongAnimal copy constructor called." << std::endl; }
   
    // WrongAnimal assignement operator.
    WrongAnimal& operator=(const WrongAnimal& other) {
        if (this != &other)
            type = other.type;
        return *this;
    }

    // WrongAnimal type getter.
    std::string getType() const {
        return type;
    }

    // WrongAnimal sound.
    void makeSound() const {
        std::cout << "WrongAnimal sound..." << std::endl;
    }

    // WrongAnimal Distructor.
    virtual ~WrongAnimal() { std::cout << "WrongAnimal default destructor called." << std::endl; }

};

class WrongCat : public WrongAnimal
{
    public:
    // WrongCat default constructor.
    WrongCat() : WrongAnimal("WrongCat") { std::cout << "WrongCat default Constructor called." << std::endl; }
    
    // WrongCat copy constructor.
    WrongCat(const WrongCat& other) : WrongAnimal(other) { std::cout << "WrongCat copy constructor called." << std::endl; }
   
    // Animal assignement operator.
    WrongCat& operator=(const WrongCat& other) {
        if (this != &other)
             WrongAnimal::operator=(other);;
        return *this;
    }

    // WrongCat sound.
    void makeSound() const {
        std::cout << "WrongCat : trying to be mimic a real cat!!" << std::endl;
    }

    // WrongCat Distructor.
    ~WrongCat() { std::cout << "WrongCat default destructor called." << std::endl; }
};

int main()
{
const WrongAnimal* meta = new WrongAnimal();
const Animal* j = new Dog();
const WrongAnimal* i = new WrongCat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
delete j;
delete i;
delete meta;
return 0;
}