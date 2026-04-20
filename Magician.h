#ifndef MAGICIAN_H
#define MAGICIAN_H

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
        int Attack(int damageBonus) override;
        void SpecialAbility(Hero& target) override;
        void TakeDamage(int damage) override;
};
#endif