#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << Y << "[Cat]" << EOC << " Default constructor" << std::endl;
    this->type = "Cat";
}

Cat::~Cat(void)
{
    std::cout << Y << "[Cat]" << EOC << " Destructor" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << Y << "[Cat]" << EOC \
        << " Meow! Meow! Meow!" << std::endl;
}
