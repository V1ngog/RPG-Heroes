#ifndef WARRIOR_H
#define WARRIOR_H

#include "Hero.h"
#include <string>

class Warrior : public Hero
{
private:
    int const shield = 15; //+health when SpecialAbility
    int const rage = 5; //+damage when SpecialAbility

public:
    Warrior(std::string name, int health, int damage);
        void Attack(int damageBonus, Hero& target) override;
        void SpecialAbility(Hero& target) override;
        void TakeDamage(int damage) override;
};
#endif