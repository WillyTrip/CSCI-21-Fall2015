#ifndef LAB_C
#define LAB_C

#include <iostream>
#include "item.h"
#include <sstream>

using std::cout;
using std::endl;
using std::string;
using std::stringstream;
class MagicItem : public Item
{
    private:
        
        string description_;
        unsigned int mana_required_;
    
    public:
    
        MagicItem(string name = "magicitem", unsigned int value = 0,
                string description = "no description", unsigned int mana_required = 0)
                :Item(name, value), description_(description), mana_required_(mana_required){
                }
            
         //~MagicItem(){}
    
        void set_description(string description);
        void set_mana_required(unsigned int mana);
    
        string description();
        unsigned int mana_required();
    
        string ToString();
    
};

#endif