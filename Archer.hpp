#ifndef _ARCHER_H_
#define _ARCHER_H_
#include "Charecter.hpp"

class Archer : public Charecter
{
private:
    double power;
public:
    Archer();
    Archer(const double power);
    Archer(const string name);
    Archer(const double power, const string name);
    Archer(const double power, const string name, const string race);

    virtual void addItem(const Item newItem) override;
    virtual double attact()const override;
    virtual double attact(const Item item) override;
    virtual void info()const override;
    virtual void print_items()const override;
    virtual Item get_last_added_item()const override;
};

Archer::Archer() : Charecter()
{
    power = 8.5;
}

Archer::Archer(const double power_) : Charecter()
{
    power = power_;
}

Archer::Archer(const string name) : Charecter(name)
{
    power = 8.5;
}

Archer::Archer(const double power_, const string name) : Charecter(name)
{
    power = power_;
}

Archer::Archer(const double power_, const string name, const string race) : Charecter(name, race)
{
    power = power_;
}

void Archer::addItem(const Item newItem)
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

double Archer::attact() const
{
    return power;
}

double Archer::attact(const Item item)
{
    bool isFound = false;
    for(auto it = items.begin(); it != items.end(); ++it)
    {
        if(*it == item) isFound = true;
    }
    if(!isFound) return power;
    return power + item.get_power();
}

void Archer::info() const
{
    cout << "POWER: " << power << endl;
    Charecter::info();
}

void Archer::print_items() const
{
    for (auto it = items.begin(); it != items.end(); ++it)
    {
        it->info();
    }
}

Item Archer::get_last_added_item() const
{
    if(!items.empty())
    {
        return items.front();
    }
    throw runtime_error ("NO AVAILABLE ITEMS");

}


#endif // _ARCHER_H_
