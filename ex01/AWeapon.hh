#ifndef _AWEAPON_H_
#define _AWEAPON_H_

#include <string>

class AWeapon
{
	public:
		explicit AWeapon(std::string const& name, int apcost, int damage);
		virtual ~AWeapon() {}
		std::string const& getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
		
	protected:
		int const _apcost;
		int _damage;
		std::string const _name;

};

#endif /* !AWEAPON_H_ */
