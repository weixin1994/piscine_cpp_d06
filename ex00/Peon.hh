#ifndef _PEON_H_
#define _PEON_H_

#include "Victim.hh"

class Peon : public Victim
{
	public:
		explicit Peon(std::string const& name);
		virtual ~Peon();
		void getPolymorphed() const;
};

#endif /* !PEON_H_ */
