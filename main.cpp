#include <iostream>
#include <cstdlib>  
#include <ctime>
#include "Warrior.h"
#include "Archer.h"
#include "Magician.h"

int main() {
    srand(time(0));
    system("chcp 1251");

    Warrior player1("bob", 150, 10);
    if (player1.isAlive()){
        player1.Attack(0);
    }
}