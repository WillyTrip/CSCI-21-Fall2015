#include "Box.h"
#include "Prize.h"

Box::~Box()
{
    delete prizes_;
}

unsigned int Box::getBoxNumber()
{
    return boxNumber_;
}

string Box::getBoxColor()
{
    return boxColor_;
}

unsigned int Box::getPrizeCapacity()
{
    return prizeCapacity_;
}

unsigned int Box::getPrizeCount()
{
    return prizeCount_;
}

void Box::setBoxNumber(unsigned int boxNumber)
{
    boxNumber_ = boxNumber;
}

void Box::setBoxColor(string boxColor)
{
    boxColor_ = boxColor;
}

bool Box::addPrize(Prize prizes)
{
    if (prizeCount_ < prizeCapacity_)
    {
        prizes_[prizeCount_++] = prizes;
        return true;
    }
    else
    {
        return false;
    }
}

Prize Box::removePrize(unsigned int index)
{
    if (index < 0 || index > prizeCapacity_)
    {
        return scratch_;
    }
    else if (!(prizes_[index] == Prize()))
    {
        Prize rem_Prize = prizes_[index];
        prizes_[index] = Prize();
        return rem_Prize;
    }
}

};