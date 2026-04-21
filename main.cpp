#include <iostream>
#include <cstdlib>  
#include <ctime>
#include "Warrior.h"
#include "Archer.h"
#include "Magician.h"
#include "Enemy.h"
#include <vector>

int main() 
{
    srand(time(0));
    system("chcp 1251");

    Hero* heroes[] = 
    {
        new Warrior("ќлег-ясный сокол", 150, 10),
        new Archer("јртур-Ўоколадный глаз", 120, 15),
        new Magician("ƒоридон-«ловещий посох", 90, 20)
    };

    int sizeList = sizeof(heroes) / sizeof(heroes[0]);
    for (int i = 0; i < sizeList; i++) 
    {
        std::cout << i + 1 << ".";
        heroes[i]->Phrase_1();
    }

    int chouce;
    while (true)
    {
        std::cout << "¬ыбери своего геро€ от 1 до 3:\n";
        if (std::cin >> chouce) 
        {
            if (chouce >= 1 && chouce <= sizeList) break;
        }
        std::cout << "ќшибка\n";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }

    Hero* player = heroes[chouce - 1];
    player->Phrase_1();

    Enemy goblin("ќрк", 175, 15);
    std::cout << "\n¬аш противник:\n";
    goblin.Phrase_1();

    std::vector<Hero*> both = {player, &goblin};

    std::cout << "\n=== Ќј„јЋќ Ѕќя ===\n";
    
    while (player->isAlive() && goblin.isAlive()) 
    {
        std::cout << "\n“вой ход!\n";
        both[0]->Attack(0, *both[1]);
        both[0]->SpecialAbility(goblin);
        
        if (!goblin.isAlive()) 
        {
            std::cout << "\n¬раг повержен!\n";
            break;
        }
        
        std::cout << "\n’од врага!\n";
        both[1]->Attack(0, *both[0]);
        both[1]->SpecialAbility(*player);

        std::cout << "“воЄ здоровье: " << player->getHealth() << " | «доровье врага: " << goblin.getHealth() << "\n";
    }
    
    std::cout << "\n=== –≈«”Ћ№“ј“ ===\n";
    if (player->isAlive()) 
    {
        std::cout << "“џ ѕќЅ≈ƒ»Ћ!\n";
    } else 
    {
        std::cout << "“џ Ѕ≈«ƒј–№...\n";
    }

    for (int i = 0; i < sizeList; i++) {
    delete heroes[i];
}
    return 0;
}   