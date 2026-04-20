#include "Warrior.h"

Warrior::Warrior(std::string name, int health, int damage)
        :Hero(name, health, damage) 
    {
        this->health += shield;
    }

    void Warrior::Attack(int damageBonus)  {
        int damage = this->damage + damageBonus;
        std::cout << "Воин " << name << " Наносит удар мечом и наносит " << damage << " единиц урона";
    }

    void Warrior::SpecialAbility() {
        std::cout << "Воин " << name << " Восстанавливает своё здоровье на " << shield;
        this->health += shield;

        std::cout << "Воин " << name << " выполняет серию приемов под яростью ";
        Attack(rage);
        Attack(rage);
    }

    void Warrior::TakeDamage(int damage) {
        setHealth(getHealth() - damage);
        Phrase_2();
    }