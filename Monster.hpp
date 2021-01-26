#ifndef _MONSTER_H_
#define _MONSTER_H_
#include "Charecter.hpp"

class Monster : public Charecter
{
private:
    double power;
public:
    Monster();
    Monster(const double power_);
    Monster(const double power_, const string name_);
    Monster(const double power_, const string name_, const string race);

    virtual Charecter* clone()const override;
///    virtual void addItem(const Item newItem) override = delete;
    virtual double attact()const override;
    virtual double attact(const Item item) override;
    virtual void info()const override;
};

Monster::Monster() : Charecter("Monster", "Monster",1)
{
    power = 5;
}

Monster::Monster(const double power_) : Charecter("Monster", "Monster",1)
{
    power = power_;
}

Monster::Monster(const double power_, const string name_) : Charecter(name_, "Monster",1)
{
    power = power_;
}

Monster::Monster(const double power_, const string name_, const string race) : Charecter(name_, race,1)
{
    power = power_;
}

Charecter* Monster::clone() const
{
    return new Monster(*this);
}

double Monster::attact() const
{
    return power;
}

double Monster::attact(const Item item)
{
    bool isFound = false;
    for(auto it = items.begin(); it != items.end(); ++it)
    {
        if(*it == item) isFound = true;
    }
    if(!isFound) return power;
    return power + item.get_power();
}

void Monster::info() const
{
    cout << "POWER: " << power << endl;
    Charecter::info();
}


#endif // _MONSTER_H_
