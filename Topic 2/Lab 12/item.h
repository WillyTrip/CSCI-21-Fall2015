#ifndef LAB_A
#define LAB_A

#include <string>
#include <iostream>
#include <sstream>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

class Item
{   
    
    private:
        
        string name_;
        unsigned int value_;
        
        
    public:
    
        Item(string name = "item", unsigned int value = 0)
            :name_(name), value_(value){
            }
            
        //virtual ~Item(){}
        
        void set_name(string name);
        void set_value(unsigned int value);
        
        string name();
        unsigned int value();
        
        string ToString();
        
};


#endif