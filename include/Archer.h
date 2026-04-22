#ifndef ARCHER_H
#define ARCHER_H

#include "Hero.h"
#include <string>

class Archer : public Hero
{
private:
    int magicCloak = 0; //the number of charges that absorb all damage taken
    int const ChanseCrit = 30;
    int const critDamage = 2;
public:
    Archer(std::string name, int health, int damage);
        void Attack(int damageBonus, Hero& target) override;
        void SpecialAbility(Hero& target) override;
        void TakeDamage(int damage) override;
};
#endif