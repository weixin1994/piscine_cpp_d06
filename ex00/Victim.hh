#ifndef _VICTIM_H_
#define _VICTIM_H_

#include <iostream>
#include <string>

class Victim
{
	public:
		Victim(std::string const& name);
		virtual ~Victim();
		std::string const& getName() const;
		virtual void getPolymorphed() const;
	
	protected:
		std::string const _name;
};

std::ostream& operator<<(std::ostream& stream, Victim const& unit);

#endif /* !VICTIM_H_ */
