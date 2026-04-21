#include "Enemy.h"

Enemy::Enemy(std::string name, int health, int damage)
    : Hero(name, health, damage) {}

    void Enemy::Attack(int damageBonus, Hero& target) {
        float finalDamage = this->damage + damageBonus;
        std::cout << "���� " << name << " ������� ���� ������� � ������� " << finalDamage << " ������ �����\n";
        target.TakeDamage(finalDamage);
    }

    void Enemy::SpecialAbility(Hero& target) {
        std::cout << "���� ������� ���� � �� ����� ������ ������\n";
    }

    void Enemy::TakeDamage(float damage) {
        setHealth(getHealth() - damage);
        Phrase_2();
    }