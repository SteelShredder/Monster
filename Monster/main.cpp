//
//  main.cpp
//  Monster
//
//  Created by Gavin Gavington on 9/29/18.
//

#include <iostream>
#include <string>

enum class Monsters
{
    OGRE,
    DRAGON,
    ORC,
    GIANT_SPIDER,
    SLIME
};

struct monster
{
    Monsters monsterType;
    std::string name;
    int health;
};
std::string printMonsterType(Monsters enumMonsterType)
{
    if (static_cast<int>(enumMonsterType) == 0)
    {
        return "Ogre";
    }
    if (static_cast<int>(enumMonsterType) == 1)
    {
        return "Dragon";
    }
    if (static_cast<int>(enumMonsterType) == 2)
    {
        return "Orc";
    }
    if (static_cast<int>(enumMonsterType) == 3)
    {
        return "Giant Spider";
    }
    if (static_cast<int>(enumMonsterType) == 4)
    {
        return "Slime";
    }
    return "error";
}
void printMonster(monster monsterX)
{
    
    std::cout << "This " << printMonsterType(monsterX.monsterType) << " is named " << monsterX.name << " and has " << monsterX.health << " health." << std::endl;
}
int main()
{
    
    monster monsterOne {Monsters::OGRE, "Torg", 145};
    monster monsterTwo {Monsters::SLIME, "Blurp", 23};
    printMonster(monsterOne);
    printMonster(monsterTwo);
    return 0;
}
