#ifndef _CHARACTER_H_
#define _CHARACTER_H_

#include <string>
#include "AWeapon.hh"
#include "AEnemy.hh"

class Character
{
	public:
		explicit Character(std::string const& name);
		virtual ~Character() {}
		int getAP() const;
		void recoverAP();
		void equip(AWeapon* weapon);
		void attack(AEnemy* target);
		std::string const& getName() const;
		AWeapon const* getWeapon() const;
		
	private:
		AWeapon* _weapon;
		int _ap;
		std::string const _name;
};

std::ostream& operator<<(std::ostream& stream, Character const& me);

#endif /* !CHARACTER_H_ */
