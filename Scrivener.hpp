#ifndef _SCRIVENER_H_
#define _SCRIVENER_H_
#include "Monster.hpp"
#include "Mage.hpp"
#include "Archer.hpp"
#include "Knight.hpp"
#include "Charecter.hpp"
#include "Item.hpp"
#include "Graph.hpp"
#include <cstdlib>

///Сцената ще е статична и всеки път ще е една и съща
///и няма да има как да се подава др
class Scrivener
{
private:
    Charecter hero;
    Graph<int> stages;
    vector<Monster> monsters;
    int currentStage;
    void receiveDamage();

public:
    Scrivener();
    Scrivener(const Charecter hero);
    Scrivener(const Charecter hero, vector<Monster> monsters);

    void OpenMinsteryBox();
    void stageInfo()const;
    void Go();
    void Go(const string direction);
    ///shte se vzima ot health sled kato napravi toi atakata
    void attactMonster();
    void info()const;
};

Scrivener::Scrivener()
{
    Knight knight;
    hero = knight;
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
    stages.addVertex(74); ///final boss stage!!!

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
    stages.addEdge(46,74);
    stages.addEdge(43,47);
    stages.addEdge(47,48);
    stages.addEdge(48,46);
    stages.addEdge(47,49);
    stages.addEdge(49,50);
    stages.addEdge(50,74);
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
    stages.addEdge(73,74);

    for(int i = 1; i <= 74; i++)
    {
        int t = rand() % 10;
        while(t < 4) t = rand() % 10;
        Monster temp(t);
        monsters.push_back(temp);
    }
    Monster boss(20, "FINAL BOSS");
    monsters.push_back(boss);
}

Scrivener::Scrivener(const Charecter hero_)
{
    hero = hero_;
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
    stages.addVertex(74); ///final boss stage!!!

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
    stages.addEdge(46,74);
    stages.addEdge(43,47);
    stages.addEdge(47,48);
    stages.addEdge(48,46);
    stages.addEdge(47,49);
    stages.addEdge(49,50);
    stages.addEdge(50,74);
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
    stages.addEdge(73,74);

    for(int i = 1; i <= 74; i++)
    {
        int t = rand() % 10;
        while(t < 4) t = rand() % 10;
        Monster temp(t);
        monsters.push_back(temp);
    }
    Monster boss(20, "FINAL BOSS");
    monsters.push_back(boss);
}

Scrivener::Scrivener(const Charecter hero_, vector<Monster>monsters_)
{
    hero = hero_;
    currentStage = 1;
    for(int i = 1; i < monsters_.size(); i++)
    {
        monsters.push_back(monsters_[i]);
    }
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
    stages.addVertex(74); ///final boss stage!!!

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
    stages.addEdge(46,74);
    stages.addEdge(43,47);
    stages.addEdge(47,48);
    stages.addEdge(48,46);
    stages.addEdge(47,49);
    stages.addEdge(49,50);
    stages.addEdge(50,74);
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
    stages.addEdge(73,74);
}

void Scrivener::info()const
{
    cout << "HERO : \n";
    hero.info();
    cout << hero.attact() << endl;
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
        hero.add_health(10.0);
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
    ///currentStage = stages[currentStage][0].get_value();
}

void Scrivener::Go(const string direction)
{

}

void Scrivener::attactMonster()
{

}

#endif // _SCRIVENER_H_
