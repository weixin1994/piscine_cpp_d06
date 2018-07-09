#include <iostream>
#include "Ice.hh"

Ice::Ice() :
    AMateria("ice")
{
}

Ice::~Ice()
{}

AMateria* Ice::clone() const
{
    return new Ice();
}

void Ice::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
