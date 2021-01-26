#ifndef _MISTERYBOX_H_
#define _MISTERYBOX_H_
#include "Monster.hpp"
#include "Mage.hpp"
#include "Archer.hpp"
#include "Knight.hpp"
#include "Charecter.hpp"
#include "Item.hpp"
#include "Graph.hpp"
#include <cstdlib>

int rand();

struct MisteryBox
{
    vector<Item> items;
    double healthReward;
    double healthDown;
    string word; ///Scrivener
    static int counter;

    MisteryBox() : word("Scrivener")
    {
        Ax a;
        Spell s;
        Bow b;
        items.resize(4);
        items[0] = a; /// 0
        items[1] = s; ///1
        items[2] = b; ///2
        healthReward = 10; ///3
        healthDown = -10; ///4
    }

    int open()
    {
        int reward = rand() % 6;
        if(reward == 3)
        {
            healthReward = rand()%50;
        }
        if(reward == 4)
        {
            double healtDownTemp = rand()%30;
            healthDown = 0;
            healthDown -= healtDownTemp;
        }

        if(reward == 5)
        {
            counter++;
        }

        return reward;
    }

    char get_prev_letter()const
    {
        return word[counter - 1];
    }

    int get_counter()const
    {
        return counter;
    }
};

int MisteryBox::counter = 0;


#endif // _MISTERYBOX_H_
