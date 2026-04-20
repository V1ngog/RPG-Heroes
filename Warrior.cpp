#include "Warrior.h"

Warrior::Warrior(std::string name, int health, int damage)
        :Hero(name, health, damage) 
    {
        this->health += shield;
    }

    void Warrior::Attack() {
        std::cout << "Воин " << name << " Наносит удар мечом и нанаосит " << damage << " едениц урона";
    }

    void Warrior::SpecialAbility() {
        std::cout << "Воин" << name << " Восстанавливает своё здоровье на " << shield;
        this->health += shield;
    }