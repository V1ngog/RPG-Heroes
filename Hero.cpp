#include "Hero.h"

Hero::Hero(std::string name, int health, int damage) {
    this->name = name;
    this->health = health;
    this->damage = damage;
}

void Hero::Phrase_1() const {
    std::cout << "���: " << name << ", ����: " << damage << ", ��������: " << health << "\n";
}

void Hero::Phrase_2() const {
    std::cout << "���: " << name << ", ��������: " << health << "\n";
}