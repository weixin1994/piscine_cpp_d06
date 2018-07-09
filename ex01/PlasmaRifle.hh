#ifndef _PLASMARIFLE_H_
#define _PLASMARIFLE_H_

#include "AWeapon.hh"

class PlasmaRifle : public AWeapon
{
	public:
		explicit PlasmaRifle();
		virtual ~PlasmaRifle() {}
		void attack() const;
};

#endif /* !PLASMARIFLE_H_ */
