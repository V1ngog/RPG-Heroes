#include "Magician.h"
#include <cstdlib>  
#include <ctime>  

Magician::Magician(std::string name, int health, int damage)
    : Hero(name, health, damage) {}

    void Magician::Attack(int damageBonus, Hero& target) {
        int finalDamage = this->damage + damageBonus;
        if ((rand() % 100) < ChanceBigBall) {
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
            this->damage += 5;
        }

        setHealth(getHealth() - finalDamage);
        PrintHealth();
    }