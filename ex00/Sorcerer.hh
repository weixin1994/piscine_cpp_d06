#ifndef _SORCERER_H_
#define _SORCERER_H_

#include <iostream>
#include <string>
#include "Victim.hh"

class Sorcerer
{
	public:
		explicit Sorcerer(std::string const& name, std::string const& title);
		virtual ~Sorcerer();
		std::string const& getName() const;
		std::string const& getTitle() const;
		void polymorph(Victim const& unit) const;
		
	protected:
		std::string const _name;
		std::string const _title;
};

std::ostream& operator<<(std::ostream& stream, Sorcerer const& unit);

#endif /* !SORCERER_H_ */
