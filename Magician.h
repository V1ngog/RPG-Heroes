#ifndef WARRIOR_H
#define WARRIOR_H

#include "Hero.h"
#include <iostream>

class Magician : public Hero
{
private:
    int ChanceMirror = 30;
    int DamageBigBall = 5;
    int ChanceBigBall = 40;

public:
    Magician(std::string name, int health, int damage);
        void Attack(int damageBonus) override;
        void SpecialAbility() override;
        void TakeDamage(int damage) override;
};
#endif