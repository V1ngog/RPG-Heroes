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

    void Phrase_1() const {
        std::cout << "Имя: " << name << ", Урон: " << damage << ", Здоровье: " << health << "\n";
    }
    
    void Phrase_2() const {
        std::cout << "Имя: " << name << ", Здоровье: " << health << "\n";
    }

    virtual int Attack(int damageBonus) = 0;
    virtual void SpecialAbility(Hero& target) = 0;
    virtual void TakeDamage(int damage) = 0;
    

};
#endif