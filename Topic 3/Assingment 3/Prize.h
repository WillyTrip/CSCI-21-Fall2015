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
        
        string getPrizeName();
        unsigned int getPrizeValue();
        
        void setPrizeName(string prizeName);
        void setPrizeValue(unsigned int prizeValue);
};

#endif