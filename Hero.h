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

    void setHealth(int health) {
        this->health = health;
    } 

    bool isAlive() const {
        return health > 0;
    }

    void Phrase_1() const;
    void Phrase_2() const;

    virtual void Attack(int damageBonus, Hero& target) = 0;
    virtual void SpecialAbility(Hero& target) = 0;
    virtual void TakeDamage(float damage) = 0;

};
#endif