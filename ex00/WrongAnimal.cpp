#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << B << "[WrongAnimal]" << EOC << " Default constructor" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << B << "[WrongAnimal]" << EOC << " Destructor" << std::endl;
}

// Member function
std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << B << "[WrongAnimal]" << EOC \
        << " Doesn't make sound " << std::endl;
}
