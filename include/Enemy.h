#ifndef ENEMY_H
#define ENEMY_H

#include "Hero.h"
#include <iostream>

class Enemy : public Hero
{
public:
    Enemy(std::string name, int health, int damage);

    void Attack(int damageBonus, Hero& target) override;
    void SpecialAbility(Hero& target) override;
    void TakeDamage(int damage) override;

};
#endif