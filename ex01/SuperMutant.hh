#ifndef _SUPERMUTANT_H_
#define _SUPERMUTANT_H_

#include "AEnemy.hh"

class SuperMutant : public AEnemy
{
	public:
		explicit SuperMutant();
		virtual ~SuperMutant();

		void takeDamage(int damage);
};

#endif /* !SUPERMUTANT_H_ */
