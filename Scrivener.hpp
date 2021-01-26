#ifndef _SCRIVENER_H_
#define _SCRIVENER_H_
#include "Monster.hpp"
#include "Mage.hpp"
#include "Archer.hpp"
#include "Knight.hpp"
#include "Charecter.hpp"
#include "Item.hpp"
#include "Graph.hpp"
#include "MisteryBox.hpp"
#include <cstdlib>
#include <chrono>
#include <thread>

///Сцената ще е статична и всеки път ще е една и съща
///и няма да има как да се подава др
class Scrivener
{
private:
    Charecter* hero;
    Graph<int> stages;
    ///chudovishtata sa spored stages:
    vector<Monster> monsters;
    int currentStage;
    string scrivenerWord;

    void receiveDamage();

public:
    Scrivener();
    Scrivener(const Charecter* hero);
    Scrivener(const Charecter* hero, vector<Monster> monsters);

    void change_hero(const Charecter* hero_);

    void OpenMinsteryBox();
    void stageInfo()const;
    void Go();
    void Go(const string direction);
    ///shte se vzima ot health sled kato napravi toi atakata
    bool attactMonster();
    void info()const;
    void hero_info()const;
    Monster get_current_level_monster()const;

};

Scrivener::Scrivener()
{
    Knight knight;
    hero = knight.clone();
    currentStage = 1;

    stages.addVertex(1);
    stages.addVertex(2);
    stages.addVertex(3);
    stages.addVertex(4);
    stages.addVertex(5);
    stages.addVertex(6);
    stages.addVertex(7);
    stages.addVertex(8);
    stages.addVertex(9);
    stages.addVertex(10);
    stages.addVertex(11);
    stages.addVertex(12);
    stages.addVertex(13);
    stages.addVertex(14);
    stages.addVertex(15);
    stages.addVertex(16);
    stages.addVertex(17);
    stages.addVertex(18);
    stages.addVertex(19);
    stages.addVertex(20);
    stages.addVertex(21);
    stages.addVertex(22);
    stages.addVertex(23);
    stages.addVertex(24);
    stages.addVertex(25);
    stages.addVertex(26);
    stages.addVertex(27);
    stages.addVertex(28);
    stages.addVertex(29);
    stages.addVertex(30);
    stages.addVertex(31);
    stages.addVertex(32);
    stages.addVertex(33);
    stages.addVertex(34);
    stages.addVertex(35);
    stages.addVertex(36);
    stages.addVertex(37);
    stages.addVertex(38);
    stages.addVertex(39);
    stages.addVertex(40);
    stages.addVertex(41);
    stages.addVertex(42);
    stages.addVertex(43);
    stages.addVertex(44);
    stages.addVertex(45);
    stages.addVertex(46);
    stages.addVertex(47);
    stages.addVertex(48);
    stages.addVertex(49);
    stages.addVertex(50);
    stages.addVertex(51);
    stages.addVertex(52);
    stages.addVertex(53);
    stages.addVertex(54);
    stages.addVertex(55);
    stages.addVertex(56);
    stages.addVertex(57);
    stages.addVertex(58);
    stages.addVertex(59);
    stages.addVertex(60);
    stages.addVertex(61);
    stages.addVertex(62);
    stages.addVertex(63);
    stages.addVertex(64);
    stages.addVertex(65);
    stages.addVertex(66);
    stages.addVertex(67);
    stages.addVertex(68);
    stages.addVertex(69);
    stages.addVertex(70);
    stages.addVertex(71);
    stages.addVertex(72);
    stages.addVertex(73);
    stages.addVertex(74);
    stages.addVertex(75);
    stages.addVertex(76);
    stages.addVertex(77);
    stages.addVertex(78);
    stages.addVertex(79);
    stages.addVertex(80);
    stages.addVertex(81);
    stages.addVertex(82);
    stages.addVertex(83);
    stages.addVertex(84);
    stages.addVertex(85);
    stages.addVertex(86);
    stages.addVertex(87);
    stages.addVertex(88);
    stages.addVertex(89);
    stages.addVertex(90);
    stages.addVertex(91);
    stages.addVertex(92);
    stages.addVertex(93);
    stages.addVertex(94);
    stages.addVertex(95);
    stages.addVertex(96);
    stages.addVertex(97);
    stages.addVertex(98);
    stages.addVertex(99);
    stages.addVertex(100);
    stages.addVertex(101);
    stages.addVertex(102);
    stages.addVertex(103);
    stages.addVertex(104);
    stages.addVertex(105);
    stages.addVertex(106);
    stages.addVertex(107);
    stages.addVertex(108);
    stages.addVertex(109);
    stages.addVertex(110);
    stages.addVertex(111);
    stages.addVertex(112);
    stages.addVertex(113);
    stages.addVertex(114);  ///final boss stage!!!

    stages.addEdge(1,2);
    stages.addEdge(2,3);
    stages.addEdge(3,4);
    stages.addEdge(4,5);
    stages.addEdge(5,6);
    stages.addEdge(6,7);
    stages.addEdge(7,8);
    stages.addEdge(8,9);
    stages.addEdge(9,10);
    stages.addEdge(10,11);
    stages.addEdge(11,74);
    stages.addEdge(2,12);
    stages.addEdge(12,13);
    stages.addEdge(13,5);
    stages.addEdge(5,14);
    stages.addEdge(14,15);
    stages.addEdge(15,8);
    stages.addEdge(15,16);
    stages.addEdge(16,17);
    stages.addEdge(17,10);
    stages.addEdge(12,18);
    stages.addEdge(18,19);
    stages.addEdge(19,20);
    stages.addEdge(20,15);
    stages.addEdge(1,21);
    stages.addEdge(21,22);
    stages.addEdge(22,23);
    stages.addEdge(23,24);
    stages.addEdge(18,24);
    stages.addEdge(24,25);
    stages.addEdge(25,26);
    stages.addEdge(26,27);
    stages.addEdge(27,28);
    stages.addEdge(28,29);
    stages.addEdge(29,30);
    stages.addEdge(30,31);
    stages.addEdge(31,32);
    stages.addEdge(32,33);
    stages.addEdge(33,74);
    stages.addEdge(21,34);
    stages.addEdge(34,35);
    stages.addEdge(35,36);
    stages.addEdge(36,37);
    stages.addEdge(37,38);
    stages.addEdge(38,39);
    stages.addEdge(39,29);
    stages.addEdge(38,40);
    stages.addEdge(40,41);
    stages.addEdge(41,42);
    stages.addEdge(42,43);
    stages.addEdge(43,44);
    stages.addEdge(44,45);
    stages.addEdge(45,46);
    stages.addEdge(46,98);
    stages.addEdge(43,47);
    stages.addEdge(47,48);
    stages.addEdge(48,46);
    stages.addEdge(47,49);
    stages.addEdge(49,50);
    stages.addEdge(50,100);
    stages.addEdge(35,51);
    stages.addEdge(51,52);
    stages.addEdge(36,52);
    stages.addEdge(52,53);
    stages.addEdge(53,54);
    stages.addEdge(54,55);
    stages.addEdge(55,56);
    stages.addEdge(56,57);
    stages.addEdge(57,43);
    stages.addEdge(53,58);
    stages.addEdge(58,59);
    stages.addEdge(59,56);
    stages.addEdge(56,60);
    stages.addEdge(60,61);
    stages.addEdge(61,62);
    stages.addEdge(62,63);
    stages.addEdge(63,49);
    stages.addEdge(60,64);
    stages.addEdge(64,65);
    stages.addEdge(65,72);
    stages.addEdge(58,66);
    stages.addEdge(66,67);
    stages.addEdge(67,68);
    stages.addEdge(68,69);
    stages.addEdge(69,70);
    stages.addEdge(70,71);
    stages.addEdge(71,72);
    stages.addEdge(72,73);
    stages.addEdge(73,104);
    ///тези са добаване след разширението на полето!
    stages.addEdge(74,75);
    stages.addEdge(75,78);
    stages.addEdge(78,79);
    stages.addEdge(79,80);
    stages.addEdge(80,81);
    stages.addEdge(81,82);
    stages.addEdge(82,83);
    stages.addEdge(83,84);
    stages.addEdge(84,88);
    stages.addEdge(88,114);
    stages.addEdge(82, 85);
    stages.addEdge(85,86);
    stages.addEdge(86,87);
    stages.addEdge(87,89);
    stages.addEdge(89,114);
    stages.addEdge(74,76);
    stages.addEdge(76,90);
    stages.addEdge(90,91);
    stages.addEdge(91,92);
    stages.addEdge(91,81);
    stages.addEdge(92,93);
    stages.addEdge(93,94);
    stages.addEdge(94,86);
    stages.addEdge(74,77);
    stages.addEdge(77,95);
    stages.addEdge(95,96);
    stages.addEdge(96,97);
    stages.addEdge(97,94);
    stages.addEdge(46,98);
    stages.addEdge(98,99);
    stages.addEdge(99,95);
    stages.addEdge(50, 100);
    stages.addEdge(100, 101);
    stages.addEdge(101,102);
    stages.addEdge(102,103);
    stages.addEdge(103,97);
    stages.addEdge(100,105);
    stages.addEdge(105,106);
    stages.addEdge(106,107);
    stages.addEdge(107,108);
    stages.addEdge(108,109);
    stages.addEdge(109,110);
    stages.addEdge(110,111);
    stages.addEdge(111,112);
    stages.addEdge(112,113);
    stages.addEdge(113,114);
    stages.addEdge(73,104);
    stages.addEdge(104,105);

    for(int i = 1; i < 105; i++)
    {
        int t = rand() % 10;
        while(t < 4) t = rand() % 10;
        Monster temp(t);
        monsters.push_back(temp);
    }
    Monster boss(20, "FINAL BOSS");
    monsters.push_back(boss);
}

void Scrivener::change_hero(const Charecter* hero_)
{
    hero = hero_->clone();
}

void Scrivener::info()const
{
    cout << "HERO : \n";
    hero->info();
    stages.print();

    for(int i = 1; i < monsters.size(); i++)
    {
        cout << "Stage " <<i <<": " << endl;
        monsters[i].info();
    }
}
///------------------------------------------------------------

void Scrivener::OpenMinsteryBox()
{
    int number = rand() % 4;
    if(number == 0)
    {
        cout << "You have won +10.0 health!\n";
        hero->add_health(10.0);
    }
    if(number == 1)
    {
        cout << "You have won the ";
    }
}

void Scrivener::stageInfo() const
{
    cout << "Stage : " << currentStage << endl;
    monsters[currentStage].info();
}

void Scrivener::Go()
{
    currentStage = stages.get_current_node()->get_data(1);
}

void Scrivener::Go(const string direction)
{
    if(direction == "left")
    {
        currentStage = stages.get_current_node()->get_data(1);
        return;
    }
    if(direction == "middle")
    {
        if(stages.get_current_node()->related.size() < 3)
        {
            cerr << "INVALID INPUT\n";
            return;
        }
        else
        {
            currentStage = stages.get_current_node()->get_data(2);
            return;
        }
    }
    if(direction == "right")
    {
        if(stages.get_current_node()->related.size() == 2)
        {
            currentStage = stages.get_current_node()->get_data(2);
            return;
        }
        else if(stages.get_current_node()->related.size() == 3)
        {
            currentStage = stages.get_current_node()->get_data(3);
            return;
        }
        else
        {
            cerr << "INVALID INPUT\n";
            return;
        }
    }
    cerr << "INVALID INPUT\n";
    return;
}

bool Scrivener::attactMonster()
{
    while(!hero->dead() && !monsters[currentStage].dead())
    {
        double heroAttackPower = 0;
        if(!hero->items_empty())
        {
            cout << "Choose a weapon to fight with\n";
            hero->print_items();
            string temp;
            cout << "Enter name: " << endl;
            cin >> temp;
            if(temp == "Ax")
            {
                Ax a;
                heroAttackPower = hero->attact(a);
            }
            else if(temp == "Spell")
            {
                Spell a;
                heroAttackPower =  hero->attact(a);
            }
            else if(temp == "Bow")
            {
                Bow a;
                heroAttackPower =  hero->attact(a);
            }
            else
            {
                cerr << "INVALID INPUT, YOU WILL TAKE THE WEAPONE WHICH WE CHOOSE FOR YOU\n";
                heroAttackPower =  hero->attact(hero->get_last_added_item());
            }
        }
        else
        {
            heroAttackPower = hero->attact();
        }
        monsters[currentStage].get_injured(heroAttackPower);
            cout << flush;
            system("cls");
           if(!monsters[currentStage].dead())
           {
               cout << "STAGE " << currentStage << " : " << endl;
                cout << "YOUR OPPONENT'S STATS: " << endl;
                get_current_level_monster().info();
                cout << endl;
                cout << "THE MONSTER IS STRIKING" << endl;
                hero->get_injured(monsters[currentStage].attact());

                std::this_thread::sleep_for(std::chrono::seconds(3));

                cout << flush;
                system("cls");

                cout << "STAGE " << currentStage << " : " << endl;
                cout << "YOUR CURRENT STATS ARE: " << endl;
                hero->info();
                cout << endl;
                std::this_thread::sleep_for(std::chrono::seconds(3));
           }

    }
    if(!hero->dead())
    {
        cout << "CONGRADS!" << endl;
        cout << "YOU WON THE BATTLE" << endl;
        cout << "AS A REWARD YOU HAVE EARN A MISTERY BOX, WOULD YOU LIKE TO OPEN IT?" << endl;
        cout << endl;
        cout << "Enter \"yes\" or \"no\" : ";
        string answer;
        cin >>answer;
        if (answer =="yes")
        {
            cout << endl;
            MisteryBox misteryBox;
            int reward = misteryBox.open();
            if(reward == 0)
            {
                cout << "YOU HAVE WON AN AX" << endl;
                cout << "STATS: " << endl;
                misteryBox.items[0].info();
                hero->addItem(misteryBox.items[0]);
            }
            if(reward == 1)
            {
                cout << "YOU HAVE WON AN SPELL" << endl;
                cout << "STATS: " << endl;
                misteryBox.items[1].info();
                hero->addItem(misteryBox.items[1]);
            }
            if(reward == 2)
            {
                cout << "YOU HAVE WON AN BOW" << endl;
                cout << "STATS: " << endl;
                misteryBox.items[2].info();
                hero->addItem(misteryBox.items[2]);
            }
            if(reward == 3)
            {
                cout << "YOU HAVE WON +" << misteryBox.healthReward << "HEALTH" << endl;
                hero->add_health(misteryBox.healthReward);
            }
            if(reward == 4)
            {
                cout << "YOU HAVE WON -" << misteryBox.healthDown << "HEALTH" << endl;
                hero->add_health(misteryBox.healthDown);
            }
            if(reward == 5)
            {
                cout << "YOU HAVE WON THE LETTER \"" << misteryBox.get_prev_letter() << "\"" << endl;
                if(scrivenerWord != "Scrivener") scrivenerWord .push_back( misteryBox.get_prev_letter());
            }

        }
        std::this_thread::sleep_for(std::chrono::seconds(6));
        if(stages[currentStage]->size() == 1)
        {
            cout << flush;
            system("cls");
            cout << "WOULD YOU LIKE TO CONTINUE TO THE NEXT STAGE?" << endl;
            cout << "WRITE \"yes\" or \"no\" : ";
            string input;
            cin >> input;
            while(input != "yes" && input != "no")
            {
                cout << flush;
                system("cls");
                string input1;
                cout << "INVALID INPUT, PLEASE TRY AGAIN!" << endl;
                cout << "WRITE \"yes\" or \"no\" : ";
                cin >> input1;
                input = input1;
            }
            if(input == "yes")
            {
                cout << flush;
                system("cls");
                currentStage = stages[currentStage]->get_data(1);
                return true;
            }
            else return false;
        }
        else if(stages[currentStage]->size() == 2)
        {
            cout << flush;
            system("cls");
            cout << "WOULD YOU LIKE TO CONTINUE TO THE NEXT STAGE?" << endl;
            cout << "WRITE \"yes\" or \"no\" : ";
            string input;
            cin >> input;
            while(input != "yes" && input != "no")
            {
                cout << flush;
                system("cls");
                string input1;
                cout << "INVALID INPUT, PLEASE TRY AGAIN!" << endl;
                cout << "WRITE \"yes\" or \"no\" : ";
                cin >> input1;
                input = input1;
            }
            if(input == "yes")
            {
                cout << flush;
                system("cls");
                cout << "NOW YOU HAVE THE 2 DIFFRENT TUNNELS AND YOU CANNOT COME BACK\n" << endl;
                cout << "CHOSE WISELY\n";
                cout << "WRITE \"left\" or \"right\" : ";
                string input;
                cin >> input;
                while(input != "left" && input != "right")
                {
                    cout << flush;
                    system("cls");
                    string input1;
                    cout << "INVALID INPUT, PLEASE TRY AGAIN!" << endl;
                    cout << "WRITE \"left\" or \"right\" : ";
                    cin >> input1;
                    input = input1;
                }
                if(input == "right")
                {
                    cout << flush;
                    system("cls");
                    currentStage = stages[currentStage]->get_data(2);
                    return true;
                }
                else
                {
                    cout << flush;
                    system("cls");
                    currentStage = stages[currentStage]->get_data(1);
                    return true;
                }
            }
            else return false;
        }
        else if(stages[currentStage]->size() == 3)
        {
            cout << flush;
            system("cls");
            cout << "WOULD YOU LIKE TO CONTINUE TO THE NEXT STAGE?" << endl;
            cout << "WRITE \"yes\" or \"no\" : ";
            string input;
            cin >> input;
            while(input != "yes" && input != "no")
            {
                cout << flush;
                system("cls");
                string input1;
                cout << "INVALID INPUT, PLEASE TRY AGAIN!" << endl;
                cout << "WRITE \"yes\" or \"no\" : ";
                cin >> input1;
                input = input1;
            }
            if(input == "yes")
            {
                cout << flush;
                system("cls");
                cout << "NOW YOU HAVE THE 3 DIFFRENT TUNNELS AND YOU CANNOT COME BACK\n" << endl;
                cout << "CHOSE WISELY\n";
                cout << "WRITE \"left\" or \"middle\"  or \"right\" : ";
                string input;
                cin >> input;
                while(input != "left" && input != "right" && input != "middle")
                {
                    cout << flush;
                    system("cls");
                    string input1;
                    cout << "INVALID INPUT, PLEASE TRY AGAIN!" << endl;
                    cout << "WRITE \"left\" or \"middle\"  or \"right\" : ";
                    cin >> input1;
                    input = input1;
                }
                if(input == "right")
                {
                    cout << flush;
                    system("cls");
                    currentStage = stages[currentStage]->get_data(3);
                    return true;
                }
                else if(input == "left")
                {
                    cout << flush;
                    system("cls");
                    currentStage = stages[currentStage]->get_data(1);
                    return true;
                }
                else
                {
                    cout << flush;
                    system("cls");
                    currentStage = stages[currentStage]->get_data(2);
                    return true;
                }
            }
        }
            else return false;
    }
    else
    {
        cout << "YOU HAVE FAILED THE JOURNEY\n";
        return false;
    }
}

void Scrivener::hero_info() const
{
    hero->info();
}

Monster Scrivener::get_current_level_monster() const
{
    return monsters[currentStage];
}


#endif // _SCRIVENER_H_
