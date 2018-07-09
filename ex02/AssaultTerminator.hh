#ifndef _ASSAULTTERMINATOR_H_
#define _ASSAULTTERMINATOR_H_

#include "ISpaceMarine.hh"

class AssaultTerminator : public ISpaceMarine
{
	public:
		explicit AssaultTerminator();
		virtual ~AssaultTerminator();

		ISpaceMarine* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};



#endif /* !ASSAULTTERMINATOR_H_ */
