#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << Y << "[WrongCat]" << EOC << " Default constructor" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
    std::cout << Y << "[WrongCat]" << EOC << " Destructor" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << Y << "[WrongCat]" << EOC \
        << " Doesn't make sound " << std::endl;
}
