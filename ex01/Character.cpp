#include <iostream>
#include "AWeapon.hh"
#include "Character.hh"

Character::Character(std::string const& name) : _weapon(NULL), _ap(40), _name(name)
{
}

int Character::getAP() const
{
    return _ap;
}

void Character::recoverAP()
{
    _ap += 10;
    if (_ap > 40)
        _ap = 40;
}

std::string const& Character::getName() const
{
    return _name;
}

void Character::equip(AWeapon* weapon)
{
    if (!weapon)
        return;
    _weapon = weapon;
}

void Character::attack(AEnemy* target)
{
    if (!target || !_weapon)
        return;
    if (_ap < _weapon->getAPCost())
        return;
    std::cout << getName() << " attacks " << target->getType() << " with a " << _weapon->getName() << std::endl;
    _weapon->attack();
    _ap -= _weapon->getAPCost();
    target->takeDamage(_weapon->getDamage());
    if (target->getHP() <= 0)
        delete target;
}

AWeapon const* Character::getWeapon() const
{
    return _weapon;
}

std::ostream& operator<<(std::ostream& stream, Character const& me)
{
    if (me.getWeapon())
        stream << me.getName() << " has " << me.getAP() << " AP and wields a " << me.getWeapon()->getName() << std::endl;
    else
        stream << me.getName() << " has " << me.getAP() << " AP and is unarmed" << std::endl;
    return stream;
}
