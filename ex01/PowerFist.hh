#ifndef _POWERFIST_H_
#define _POWERFIST_H_

#include "AWeapon.hh"

class PowerFist : public AWeapon
{
	public:
		explicit PowerFist();
		void attack() const;
};

#endif /* !POWERFIST_H_ */
