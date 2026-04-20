#ifndef ENEMY_H
#define ENEMY_H

#include "Hero.h"
#include <iostream>

class Enemy : public Hero
{
public:
    Enemy(std::string name, int health, int damage);

    int Attack(int damageBonus) override;
    void SpecialAbility(Hero& target) override;
    void TakeDamage(int damage) override;

};
#endif