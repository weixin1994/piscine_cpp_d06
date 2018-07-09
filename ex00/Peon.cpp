#include "Peon.hh"

Peon::Peon(std::string const& name) : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
    std::cout << getName() << " has been turned into a pink pony !" << std::endl;
}
