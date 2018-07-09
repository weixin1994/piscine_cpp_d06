#include "AWeapon.hh"

AWeapon::AWeapon(std::string const& name, int apcost, int damage) : _apcost(apcost), _damage(damage), _name(name)
{
}

std::string const& AWeapon::getName() const
{
    return _name;
}

int AWeapon::getAPCost() const
{
    return _apcost;
}

int AWeapon::getDamage() const
{
    return _damage;
}
