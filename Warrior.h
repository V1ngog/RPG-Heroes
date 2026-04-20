#ifndef WARRIOR_H
#define WARRIOR_H

#include "Hero.h"
#include <string>

class Warrior : public Hero
{
private:
    int shield = 15;
    int rage = 5;

public:
    Warrior(std::string name, int health, int damage);
        void Attack(int damageBonus) override;
        void SpecialAbility() override;
        void TakeDamage(int damage) override;
};
#endif