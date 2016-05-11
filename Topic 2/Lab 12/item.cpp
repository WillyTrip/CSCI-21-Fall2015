#include "item.h"


void Item::set_name(string name)
{
    name_ = name;
}

void Item::set_value(unsigned int value)
{
    value_ = value;
}

string Item::name()
{
    return name_;
}

unsigned int Item::value()
{
    return value_;
}

string Item::ToString()
{
    string item_value;
    stringstream ss;
    ss.str();
    
    ss << name_ << ", $" << value_;
    item_value = ss.str();
    return item_value;
}
