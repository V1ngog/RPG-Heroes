#include "Magician.h"
#include <cstdlib>  
#include <ctime>  

Magician::Magician(std::string name, int health, int damage)
    : Hero(name, health, damage) {}

    void Magician::Attack(int damageBonus) {
        int finalDamage = damage + damageBonus;
        if ((rand() % 100) < ChanceBigBall) {
            finalDamage += DamageBigBall;
            std::cout << "БОЛЬШОЙ ФАЕРБОЛ";
        }
        std::cout << "Маг " << name << " наносит урон фаерболом в размере " << finalDamage << " Едениц";
    }

    void Magician::SpecialAbility() {
        std::cout << "Маг колдует МЕТЕОРИТНЫЙ ДОЖДЬ";
        Attack(10);
        Attack(10);
    }

    void Magician::TakeDamage(int damage) {
        int finalDamage = damage;

        if ((rand() % 100) < ChanceMirror) {
            std::cout << "Маг отражает половну полученного урона обратно";
            finalDamage /= 2;
            Attack(finalDamage);
        }

        setHealth(getHealth() - finalDamage);
        Phrase_2();
    }