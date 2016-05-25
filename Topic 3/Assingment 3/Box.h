#ifndef BOX
#define BOX

#include "Prize.h"
#include <string>
#include <iostream>
using namespace std;

class Box
{
    private:
    
        unsigned int boxNumber_;
        string boxColor_;
        Prize scratch_;
        Prize* prizes_;
        unsigned int prizeCapacity_;
        unsigned int prizeCount_;
        
    public:
        
        Box()
            :boxNumber_(0), boxColor_("NO COLOR"),
            prizeCapacity_(5), prizeCount_(0)
            {}
            
        Box(unsigned int boxNumber, string boxColor,
            unsigned int prizeCapacity)
            :boxNumber_(boxNumber), boxColor_(boxColor), prizeCapacity_(prizeCapacity)
            {
                Prize *prize = new Prize[prizeCapacity_];
            }

        ~Box();
        
        unsigned int getBoxNumber();
        unsigned int getPrizeCapacity();
        unsigned int getPrizeCount();
        string getBoxColor();
        
        void setBoxNumber(unsigned int boxNumber);
        void setBoxColor(string boxColor);
        
        bool addPrize(Prize prizes);
        Prize getPrize(unsigned int index);
        Prize removePrize(unsigned int index);
        
};

#endif