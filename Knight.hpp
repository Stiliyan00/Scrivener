#ifndef _KNIGHT_H_
#define _KNIGHT_H_
#include "Charecter.hpp"

class Knight : public Charecter
{
private:
    double power;
public:
    Knight();
    Knight(const double power_);
    Knight(const double power_, const string name_);
    Knight(const double power_, const string name_, const string race);

    virtual void addItem(const Item newItem) override;
    virtual double attact()const override;
    virtual double attact(const Item item) override;
    virtual void info()const override;
};

Knight::Knight() : Charecter()
{
    power = 9;
}

Knight::Knight(const double power_) : Charecter()
{
    power = power_;
}

Knight::Knight(const double power_, const string name_) : Charecter(name_)
{
    power = power_;
}

Knight::Knight(const double power_, const string name_, const string race) : Charecter(name_, race)
{
    power = power_;
}

void Knight::addItem(const Item newItem)
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

double Knight::attact() const
{
    return this->power;
}

double Knight::attact(const Item item)
{
    bool isFound = false;
    for(auto it = items.begin(); it != items.end(); ++it)
    {
        if(*it == item) isFound = true;
    }
    if(!isFound) return power;
    return power + item.get_power();
}

void Knight::info() const
{
    cout << "POWER: " << power << endl;
    Charecter :: info();
}



#endif // _KNIGHT_H_
