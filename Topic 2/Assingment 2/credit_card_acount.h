#ifndef LAB_C
#define LAB_C

#include <string>
#include <iostream>
#include "bank_acounts.h"

using namespace std;

class cc_acount : public bank_acounts
{
    private:
        
        double interest_;
        
    public:
    
        cc_acount(double balance = 0, string bank_name = "Bank of Nick",
                  double activity = 0, double interest = 0.1)
                  : bank_acounts(balance, bank_name, activity)
                  {}
                  
        void set_c_interest(double interest);
        
        double get_c_interest();
        
        double cbal_af_int();
};

#endif