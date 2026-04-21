#include "Archer.h"
#include <cstdlib>  
#include <ctime>  



Archer::Archer(std::string name, int health, int damage) 
    : Hero(name, health, damage) {}

    void Archer::Attack(int bonusDamage, Hero& target) {
        float finalDamage = this->damage + bonusDamage;
  
        if ((rand() % 100) < ChanseCrit) {
            finalDamage = this->damage * critDamage;
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

    void Archer::TakeDamage(float damage) {
        if (magicCloak >= 1) {
            std::cout << "���� �������� ��������� �������\n";
            magicCloak -= 1;
        }
        else {
            setHealth(getHealth() - damage);
            Phrase_2();
        }
    }
