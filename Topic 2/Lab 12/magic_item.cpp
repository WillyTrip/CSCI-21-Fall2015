#include "magic_item.h"

void MagicItem::set_description(string description)
{
    description_ = description;
}

void MagicItem::set_mana_required(unsigned int mana_required)
{
    mana_required_ = mana_required;
}

string MagicItem::description()
{
    return description_;
}

unsigned int MagicItem::mana_required()
{
    return mana_required_;
}

string MagicItem::ToString()
{
    string magic;
    stringstream ss;
    ss.str();
    
    ss << Item::name() << ", " << "$" << Item::value() << ", " << description_ << ", requires " << mana_required_ << " mana";
    magic = ss.str();
    return magic;
}