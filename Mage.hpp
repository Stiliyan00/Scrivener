#ifndef _MAGE_H_
#define _MAGE_H_
#include "Charecter.hpp"
#include "Item.hpp"

class Mage : public Charecter
{
private:
    double power;
public:
    Mage();
    Mage(const double power_);
    Mage(const string name);
    Mage(const double power_ , const string name);
    Mage(const double power_, const string name, const string race);

    virtual Charecter* clone()const override;

    virtual void addItem(const Item newItem) override;
    virtual double attact()const override;
    virtual double attact(const Item item) override;
    virtual void info()const override;
    virtual void print_items()const override;
    virtual Item get_last_added_item()const override;
};

Mage::Mage() : Charecter()
{
    power = 10;
}

Mage::Mage(const double power_) : Charecter()
{
    power = power_;
}

Mage::Mage(const string name) : Charecter(name)
{
    power = 10;
}

Mage::Mage(const double power_, const string name) : Charecter(name)
{
    power = power_;
}

Mage::Mage(const double power_, const string name, const string race) : Charecter(name, race)
{
    power = power_;
}

Charecter* Mage::clone() const
{
    return new Mage(*this);
}


void Mage::addItem(const Item newItem)
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


double Mage::attact() const
{
    return power;
}

double Mage::attact(const Item item)
{
    bool isFound = false;
    for(auto it = items.begin(); it != items.end(); ++it)
    {
        if(*it == item) isFound = true;
    }
    if(!isFound) return power;
    if(item.get_name() == "Spell")
    {
        ///ako sme izbrali podhodqshtoto oryjie da e po 2 silata na udara;
        return power + (2 * item.get_power());
    }
    return power + item.get_power();
}

void Mage::info() const
{
    cout << "POWER : " << power << endl;
    Charecter::info();
    cout << "Race specification: Mage" << endl;
}

void Mage::print_items() const
{
    for (auto it = items.begin(); it != items.end(); ++it)
    {
        it->info();
    }
}

Item Mage::get_last_added_item() const
{
    if(!items.empty())
    {
        return items.front();
    }
    throw runtime_error ("NO AVAILABLE ITEMS");

}


#endif // _MAGE_H_
