#include "food_item.h"


void FoodItem::set_calories(unsigned int calories)
{
    calories_ = calories;
}

void FoodItem::set_unit_of_measure(string unit_of_measure)
{
    unit_of_measure_ = unit_of_measure;
}

void FoodItem::set_units(double units)
{
    units_ = units;
}

unsigned int FoodItem::calories()
{
    return calories_;
}

string FoodItem::unit_of_measure()
{
    return unit_of_measure_;
}

double FoodItem::units()
{
    return units_;
}

string FoodItem::ToString()
{
    string food;
    stringstream ss;
    ss.str();
    ss.setf(std::ios::fixed);
    ss.precision(2);
    
    ss << Item::name() << ", $" << Item::value() << ", " << units_ << " " << unit_of_measure_ << ", " << calories_ << " calories";
    food = ss.str();
    return food;
}
   