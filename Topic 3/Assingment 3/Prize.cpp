#include "Prize.h"

Prize::~Prize()
{
    
}

string Prize::get_prizeName()
{
    return prizeName_;
}

unsigned int Prize::get_prizeValue()
{
    return prizeValue_;
}

void Prize::set_prizeName(string prizeName)
{
    prizeName_ = prizeName;
}

void Prize::set_prizeValue(unsigned int prizeValue)
{
    prizeValue_ = prizeValue;
}

bool operator == (const Prize& prize1, const Prize& prize2)
{
    if (prize1.prizeName_ == prize2.prizeName_ && prize1.prizeValue_ == prize2.prizeValue_)
    {
        return true;
    }
    else 
    {
        return false;
    }
}