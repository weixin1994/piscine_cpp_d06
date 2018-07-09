#include "Sorcerer.hh"

Sorcerer::Sorcerer(std::string const& name, std::string const& title) : _name(name), _title(title)
{
    std::cout << getName() << ", " << getTitle() << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << getName() << ", " << getTitle() << ", is dead. Consequences will never be the same !" << std::endl;
}

std::string const& Sorcerer::getName() const
{
    return _name;
}

std::string const& Sorcerer::getTitle() const
{
    return _title;
}

void Sorcerer::polymorph(Victim const& unit) const
{
    unit.getPolymorphed();
}

std::ostream& operator<<(std::ostream& stream, Sorcerer const& unit)
{
    stream << "I am " << unit.getName() << ", " << unit.getTitle() << ", and I like ponies !" << std::endl;
    return stream;
}
