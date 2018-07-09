#ifndef AENEMY_H_
#define AENEMY_H_

#include <string>

class AEnemy
{
public:
    explicit AEnemy(int hp, std::string const& type);
    virtual ~AEnemy() {}
    std::string const& getType() const;
    int getHP() const;

    virtual void takeDamage(int damage);
protected:
    int _hp;
    std::string const _type;
};

#endif /* !AENEMY_H_ */
