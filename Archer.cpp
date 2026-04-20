#include "Archer.h"
#include <cstdlib>  
#include <ctime>  



Archer::Archer(std::string name, int health, int damage) 
    : Hero(name, health, damage) {}

    int Archer::Attack(int bonusDamage) {
        float finalDamage = this->damage;
  
        if ((rand() % 100) < ChanseCrit) {
            finalDamage = this->damage * critDamage;
            std::cout << "КРИТИЧЕСКИЙ УДАР\n";
        }
        std::cout << "Лучник " << name << " атакует из лука и наносит " << finalDamage << "едениц урона\n";
        return finalDamage;
    }

    void Archer::SpecialAbility(Hero& target) {
        std::cout << "Лучник " << name << " наносит удар и поглащает следующий удар волшебной мантией\n";
        target.TakeDamage(Attack(0));
        magicCloak += 1;
    }

    void Archer::TakeDamage(int damage) {
        if (magicCloak >= 1) {
            std::cout << "Удар поглащён аолнебной мантией\n";
            magicCloak -= 1;
        }
        else {
            setHealth(getHealth() - damage);
            Phrase_2();
        }
    }
