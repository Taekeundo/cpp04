#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << G << "[Dog]" << EOC << " Default constructor" << std::endl;
    this->type = "Dog";
}

Dog::~Dog(void)
{
    std::cout << G << "[Dog]" << EOC << " Destructor" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << G << "[Dog]" << EOC \
        << " WAU! WAU! WAU!" << std::endl;
}
