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
        new Warrior("����-����� �����", 150, 10),
        new Archer("�����-���������� ����", 120, 15),
        new Magician("�������-�������� �����", 90, 20)
    };

    int sizeList = sizeof(heroes) / sizeof(heroes[0]);
    for (int i = 0; i < sizeList; i++) 
    {
        std::cout << i + 1 << ".";
        heroes[i]->PrintStats();
    }

    int chouce;
    while (true)
    {
        std::cout << "������ ������ ����� �� 1 �� 3:\n";
        if (std::cin >> chouce) 
        {
            if (chouce >= 1 && chouce <= sizeList) break;
        }
        std::cout << "������\n";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }

    Hero* player = heroes[chouce - 1];
    player->PrintStats();

    Enemy* goblin = new Enemy("���", 175, 15);
    std::cout << "\n��� ���������:\n";
    goblin->PrintStats();

    std::vector<Hero*> both = {player, goblin};

    std::cout << "\n=== ������ ��� ===\n";
    
    while (player->isAlive() && goblin->isAlive()) 
    {
        std::cout << "\n���� ���!\n";
        both[0]->Attack(0, *both[1]);
        both[0]->SpecialAbility(*goblin);
        
        if (!goblin->isAlive()) 
        {
            std::cout << "\n���� ��������!\n";
            break;
        }
        
        std::cout << "\n��� �����!\n";
        both[1]->Attack(0, *both[0]);
        both[1]->SpecialAbility(*player);

        std::cout << "��� ��������: " << player->getHealth() << " | �������� �����: " << goblin->getHealth() << "\n";
    }
    
    std::cout << "\n=== ��������� ===\n";
    if (player->isAlive()) 
    {
        std::cout << "�� �������!\n";
    } else 
    {
        std::cout << "�� �������...\n";
    }

    for (int i = 0; i < sizeList; i++) {
    delete heroes[i];
}
    return 0;
}   