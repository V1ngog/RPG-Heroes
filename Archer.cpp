#include "Archer.h"
#include <cstdlib>  
#include <ctime>  



Archer::Archer(std::string name, int health, int damage) 
    : Hero(name, health, damage) {}

    void Archer::Attack(int bonusDamage) {
        float finalDamage = this->damage;
  
        if ((rand() % 100) < ChanseCrit) {
            finalDamage = this->damage * critDamage;
            std::cout << "КРИТИЧЕСКИЙ УДАР";
        }
        std::cout << "Лучник " << name << " атакует из лука и наносит " << finalDamage << "едениц урона";
    }

    void Archer::SpecialAbility() {
        std::cout << "Лучник " << name << " наносит удар и поглащает следующий удар волшебной мантией";
        Attack(0);
        magicCloak += 1;
    }

    void Archer::TakeDamage(int damage) {
        if (magicCloak >= 1) {
            std::cout << "Удар поглащён аолнебной мантией";
            magicCloak -= 1;
        }
        else {
            setHealth(getHealth() - damage);
            Phrase_2();
        }
    }
