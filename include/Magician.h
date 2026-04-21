#ifndef MAGICIAN_H
#define MAGICIAN_H

#include "Hero.h"
#include <iostream>

class Magician : public Hero
{
private:
    int const ChanceMirror = 30;
    int const DamageBigBall = 5;
    int const ChanceBigBall = 40;
    int const DamageUp = 5;

public:
    Magician(std::string name, int health, int damage);
        void Attack(int damageBonus, Hero& target) override;
        void SpecialAbility(Hero& target) override;
        void TakeDamage(int damage) override;
};
#endif