#include "Warrior.h"

Warrior::Warrior(std::string name, int health, int damage)
        :Hero(name, health, damage) 
    {
        this->health += shield;
    }

    void Warrior::Attack(int damageBonus, Hero& target)  {
        int finalDamage = this->damage + damageBonus;
        std::cout << "���� " << name << " ������� ���� ����� � ������� " << finalDamage << " ������ �����\n";
        target.TakeDamage(finalDamage);
    }

    void Warrior::SpecialAbility(Hero& target) {
        std::cout << "���� " << name << " ��������������� ��� �������� �� " << shield << "\n";
        this->health += shield;

        std::cout << "���� " << name << " ��������� ����� ������� ��� ������� \n";
        Attack(rage, target);
        Attack(rage, target);
    }

    void Warrior::TakeDamage(float damage) {
        setHealth(getHealth() - damage);
        Phrase_2();
    }