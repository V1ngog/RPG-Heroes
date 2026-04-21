#include "Hero.h"

Hero::Hero(std::string name, int health, int damage) {
    this->name = name;
    this->health = health;
    this->damage = damage;
}

void Hero::PrintStats() const {
    std::cout << "���: " << name << ", ����: " << damage << ", ��������: " << health << "\n";
}

void Hero::PrintHealth() const {
    std::cout << "���: " << name << ", ��������: " << health << "\n";
}