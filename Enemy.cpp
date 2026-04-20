#include "Enemy.h"

Enemy::Enemy(std::string name, int health, int damage)
    : Hero(name, health, damage) {}

    int Enemy::Attack(int damageBonus) {
        std::cout << "Враг " << name << " Наносит удар дубиной и наносит " << damage << " единиц урона\n";
        return damage;
    }

    void Enemy::SpecialAbility(Hero& target) {
        std::cout << "Враг слишком слаб и не имеет особых умений\n";
    }

    void Enemy::TakeDamage(int damage) {
        setHealth(getHealth() - damage);
        Phrase_2();
    }