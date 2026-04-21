#ifndef WARRIOR_H
#define WARRIOR_H

#include "Hero.h"
#include <string>

class Warrior : public Hero
{
private:
    int const shield = 15;
    int const rage = 5;

public:
    Warrior(std::string name, int health, int damage);
        void Attack(int damageBonus, Hero& target) override;
        void SpecialAbility(Hero& target) override;
        void TakeDamage(float damage) override;
};
#endif