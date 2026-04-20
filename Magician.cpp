#include "Magician.h"
#include <cstdlib>  
#include <ctime>  

Magician::Magician(std::string name, int health, int damage)
    : Hero(name, health, damage) {}

    int Magician::Attack(int damageBonus) {
        int finalDamage = damage + damageBonus;
        if ((rand() % 100) < ChanceBigBall) {
            finalDamage += DamageBigBall;
            std::cout << "БОЛЬШОЙ ФАЕРБОЛ\n";
        }
        std::cout << "Маг " << name << " наносит урон фаерболом в размере " << finalDamage << " Едениц\n";
        return finalDamage;
    }

    void Magician::SpecialAbility(Hero& target) {
        std::cout << "Маг колдует МЕТЕОРИТНЫЙ ДОЖДЬ\n";
        int d1 = Attack(10);
        int d2 = Attack(10);
        target.TakeDamage(d1 + d2);
    }

    void Magician::TakeDamage(int damage) {
        int finalDamage = damage;

        if ((rand() % 100) < ChanceMirror) {
            std::cout << "Маг отражает половну полученного урона обратно\n";
            finalDamage /= 2;
            Attack(finalDamage);
        }

        setHealth(getHealth() - finalDamage);
        Phrase_2();
    }