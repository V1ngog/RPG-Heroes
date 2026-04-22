#include "Archer.h"
#include <random>

std::random_device rd;
std::mt19937 gen(rd());

std::uniform_int_distribution<> chanceDist(0, 99);

Archer::Archer(std::string name, int health, int damage) 
    : Hero(name, health, damage) {}

    void Archer::Attack(int bonusDamage, Hero& target) {
        float finalDamage = this->damage + bonusDamage;
  
        if (chanceDist(gen) < ChanseCrit) {
            finalDamage = this->damage * critDamage + bonusDamage;
            std::cout << "����������� ����\n";
        }
        std::cout << "������ " << name << " ������� �� ���� � ������� " << finalDamage << "������ �����\n";
        target.TakeDamage(finalDamage);
    }

    void Archer::SpecialAbility(Hero& target) {
        std::cout << "������ " << name << " ������� ���� � ��������� ��������� ���� ��������� �������\n";
        Attack(0, target);
        magicCloak += 1;
    }

    void Archer::TakeDamage(int damage) {
        if (magicCloak >= 1) {
            std::cout << "���� �������� ��������� �������\n";
            magicCloak -= 1;
        }
        else {
            setHealth(getHealth() - damage);
            PrintHealth();
        }
    }
