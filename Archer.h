#ifndef ARCHER_H
#define ARCHER_H

#include "Hero.h"
#include <string>

class Archer : public Hero
{
private:
    int magicCloak = 0;
    int ChanseCrit = 30;
    float critDamage = 1.5;
public:
    Archer(std::string name, int health, int damage);
        int Attack(int damageBonus) override;
        void SpecialAbility(Hero& target) override;
        void TakeDamage(int damage) override;
};
#endif