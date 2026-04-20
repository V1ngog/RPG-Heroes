#include "Warrior.h"

Warrior::Warrior(std::string name, int health, int damage)
        :Hero(name, health, damage) 
    {
        this->health += shield;
    }

    int Warrior::Attack(int damageBonus)  {
        int damage = this->damage + damageBonus;
        std::cout << "Воин " << name << " Наносит удар мечом и наносит " << damage << " единиц урона\n";
        return damage;
    }

    void Warrior::SpecialAbility(Hero& target) {
        std::cout << "Воин " << name << " Восстанавливает своё здоровье на " << shield << "\n";
        this->health += shield;

        std::cout << "Воин " << name << " выполняет серию приемов под яростью \n";
        target.TakeDamage(Attack(rage) + Attack(rage));
    }

    void Warrior::TakeDamage(int damage) {
        setHealth(getHealth() - damage);
        Phrase_2();
    }