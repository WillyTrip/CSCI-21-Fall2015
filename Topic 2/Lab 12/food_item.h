#ifndef LAB_B
#define LAB_B

#include <iostream>
#include "item.h"
#include <sstream>

using std::cout;
using std::endl;
using std::string;
using std::stringstream;

class FoodItem : public Item
{
    private:
    
        unsigned int calories_;
        string unit_of_measure_;
        double units_;
        
    public:
    
        FoodItem(string name = "fooditem", unsigned int value = 0,
                unsigned int calories = 0, string unit_of_measure = "nounits",
                double units = 0)
                :Item(name, value), calories_(calories), unit_of_measure_(unit_of_measure), units_(units)
                {
                    
                }
                
         //~FoodItem(){}
        
        void set_calories(unsigned int calories);
        void set_unit_of_measure(string unit_of_measure);
        void set_units(double units);
        
        unsigned int calories();
        string unit_of_measure();
        double units();
        
        string ToString();
    
};

#endif