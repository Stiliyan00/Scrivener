#ifndef _ITEM_H_
#define _ITEM_H_

using std::string;
using std::cout;
using std::endl;

class Item
{
private:
    string name;
    double added_power;

public:
    Item();
    Item(const string name_);
    Item(const string name_, const double added_power_);

    double get_power()const;
    string get_name()const;
    virtual void info()const;

    bool operator==(const Item& otherItem);
};

Item::Item()
{
    name = "spell";
    added_power = 10;
}

Item::Item(const string name_)
{
    name = name_;
    added_power = 10;
}

Item::Item(const string name_, const double added_power_)
{
    name = name_;
    added_power = added_power_;
}

double Item::get_power() const
{
    return this->added_power;
}

string Item::get_name() const
{
    return this->name;
}

void Item::info() const
{
    cout << "WEAPON: " << name << endl;
    cout << "Additional power: " << added_power << endl;
}

bool Item::operator==(const Item& otherItem)
{
    if(name == otherItem.name && added_power == otherItem.added_power) return true;
    return false;
}

///chudq se dali da imam izobshto konstructor s parametri na spell , ax, ...
class Spell : public Item
{
public:
    Spell(const string name_ = "Spell", const double added_power = 10);
    virtual void info()const override;
};

Spell::Spell(const string name_, const double added_power) : Item(name_, added_power)
{}

void Spell::info() const
{
    Item :: info();
}


class Sword : public Item
{
    public:
    Sword(const string name_ = "Sword", const double added_power = 9);
    void info()const;
};

Sword::Sword(const string name_, const double added_power) : Item(name_, added_power)
{}

void Sword::info() const
{
    Item :: info();
}

class Ax : public Item
{
public :
    Ax(const string name_ = "Ax" , const double added_power = 8);
    void info()const;
};

Ax::Ax(const string name_, const double added_power) : Item(name_, added_power)
{}

void Ax::info() const
{
    Item :: info();
}

class Bow : public Item
{
    public:
    Bow(const string name_ = "Bow", const double added_power = 8.5);
    void info();
};

Bow::Bow(const string name_, const double added_power) : Item(name_,added_power)
{}

void Bow::info()
{
    Item::info();
}


#endif // _ITEM_H_
