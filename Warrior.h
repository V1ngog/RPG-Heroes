#ifndef WARRIOR_H
#define WARRIOR_H

#include "Hero.h"
#include <string>

class Warrior : public Hero
{
private:
    int shield = 15;

public:
    Warrior(std::string name, int health, int damage);
        void Attack() override;
        void SpecialAbility() override;
        void TakeDamage(int damage) override;
};
#endif