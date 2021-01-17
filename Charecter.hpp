#ifndef _CHARECTER_H_
#define _CHARECTER_H_
#include <string.h>
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include "Item.hpp"

using std::string;
using std::cout;
using std::cin;
using std::list;

class Charecter
{
private:
    string name;
    string race;
    double health;
protected:
    list<Item> items;
public:
    Charecter();
    Charecter(const string name_);
    Charecter(const string name_, const string race_);
    Charecter(const string name_, const string race_, const list<Item> items_);

    bool dead()const;
    bool items_full()const;
    bool items_empty()const;
    void add_health(const double add);
    virtual void addItem(const Item newItem);
    void change_item(const Item newItem, const Item oldItem);
    void change_item(const Item newItem);
    virtual double attact()const; ///ако не се избере с кое оръжие да напада само с неговата си сила
    virtual double attact(const Item weapone);
    void get_injured(const double damage);
    virtual void info()const;
};

Charecter::Charecter()
{
    name = "NAMELESS";
    race = "Hero";
    health = 100.0;
}

Charecter::Charecter(const string name_)
{
    name = name_;
    race = "Hero";
    health = 100.0;
}

Charecter::Charecter(const string name_, const string race_)
{
    name = name_;
    race = race_;
    health = 100.0;
}

Charecter::Charecter(const string name_, const string race_, const list<Item> items_)
{
    name = name_;
    race = race_;
    ///ако имаме повече от 3 items да приема само първите 3;
    int counter = 0;
    for(auto it = items_.begin(); it != items_.end(); ++it)
    {
        if(counter > 2) break;
        items.push_back(*it);
        counter++;
    }
    health = 100.0;
}

bool Charecter::dead() const
{
    return health <= 0.0;
}

double Charecter::attact() const
{
    ///това ще е виртуална функция и ще се променя според героя;
    return 10;
}

double Charecter::attact(const Item weapone)
{
    bool isFound = false;
    ///Проверка дали това оръжие се съдържа в items
    for(auto it = items.begin(); it!=items.end(); ++it)
    {
        if(*it == weapone) isFound = true;
    }
    if(!isFound) return 10.0;
    return 10.0 + weapone.get_power();
}


void Charecter::get_injured(const double damage)
{
    health -= damage;
}

void Charecter::add_health(const double add)
{
    health += add;
}

void Charecter::addItem(const Item newItem)
{
    if(items_full())
    {
        cout << "Chose which item to lose: \n";
        for (auto it = items.begin(); it != items.end(); ++it)
        {
            it->info();
        }
        string tempName;
        double tempPower;
        cout << "Enter name: ";
        cin >> tempName;
        cout << "Enter power: ";
        cin >> tempPower;
        Item temp(tempName, tempPower);
        change_item(temp, newItem);
        return;
    }
    items.emplace_front(newItem);
}

bool Charecter::items_full() const
{
    if(items.size() > 2) return true;
    return false;
}

bool Charecter::items_empty() const
{
    if(items.empty()) return true;
    return false;
}

void Charecter::change_item(const Item newItem, const Item oldItem)
{
    list<Item>::iterator it = find(items.begin(), items.end(), oldItem);

   items.emplace(it, newItem);
   ++it;
   items.erase(it);
}

void Charecter::change_item(const Item newItem)
{
    list<Item>::iterator it = items.end();
    --it;
    items.erase(it);
    items.emplace_front(newItem);
}


void Charecter::info() const
{
    cout << "NAME: " << this->name << endl;
    cout << "RACE: " << this->race << endl;
    for (auto it = items.begin(); it != items.end(); ++it)
    {
        it->info();
    }
}



#endif // _CHARECTER_H_
