#ifndef PRIZE
#define PRIZE

#include <string>
#include <iostream>
using namespace std;

class Prize
{
    private:
    
        string prizeName_;
        unsigned int prizeValue_;
        
    public:
    
        Prize()
            :prizeName_("NO NAME"), prizeValue_(0)
            {}
            
        Prize(string prizeName, unsigned int prizeValue)
            :prizeName_(prizeName), prizeValue_(prizeValue)
            {}
            
        ~Prize();
        
        friend bool operator ==(const Prize& name1, const Prize& name2);
        
        string get_prizeName();
        unsigned int get_prizeValue();
        
        void set_prizeName(string prizeName);
        void set_prizeValue(unsigned int prizeValue);
};

#endif