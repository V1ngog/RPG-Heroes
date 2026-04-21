#ifndef HERO_H 
#define HERO_H

#include <string>
#include <iostream>

class Hero 
{
protected:
    int damage;
    int health;
    std::string name;

    void setHealth(int health) {
        this->health = health;
    } 

public:
    Hero(std::string name, int health, int damage);
    virtual ~Hero() {}

    std::string getName() const {
        return name;
    }

    int getHealth() const {
        return health;
    }

    int getDamage() const {
        return damage;
    }

    bool isAlive() const {
        return health > 0;
    }

    void PrintStats() const;
    void PrintHealth() const;

    virtual void Attack(int damageBonus, Hero& target) = 0;
    virtual void SpecialAbility(Hero& target) = 0;
    virtual void TakeDamage(float damage) = 0;

};
#endif