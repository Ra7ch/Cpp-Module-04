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
