#include "Magician.h"
#include <random>

std::random_device rd;
std::mt19937 gen(rd());

std::uniform_int_distribution<> ChanceDist (0, 99);

Magician::Magician(std::string name, int health, int damage)
    : Hero(name, health, damage) {}

    void Magician::Attack(int damageBonus, Hero& target) {
        int finalDamage = this->damage + damageBonus;
        if (ChanceDist(gen) < ChanceBigBall) {
            finalDamage += DamageBigBall;
            std::cout << "������� �������\n";
        }
        std::cout << "��� " << name << " ������� ���� ��������� � ������� " << finalDamage << " ������\n";
        target.TakeDamage(finalDamage);
    }

    void Magician::SpecialAbility(Hero& target) {
        std::cout << "��� ������� ����������� �����\n";
        Attack(10, target);
        Attack(10, target);
    }

    void Magician::TakeDamage(int damage) {
        int finalDamage = damage;

        if ((rand() % 100) < ChanceMirror) {
            std::cout << "��� �������� ������� ����������� ����� �������\n";
            finalDamage /= 2;
            this->damage += DamageUp;
        }

        setHealth(getHealth() - finalDamage);
        PrintHealth();
    }