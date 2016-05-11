#ifndef LAB_H
#define LAB_H

#include <string>
#include <iostream>
#include "bank_acounts.h"

using namespace std;

class checking_acount : public bank_acounts
{
    private:
    
        double processing_fee_;
        
    public:
    
        checking_acount(double balance = 0.0, string bank_name = "Bank of Nick",
                        double activity = 0.0, double processing_fee = 1.5)
                        : bank_acounts(balance, bank_name, activity), processing_fee_(processing_fee)
                        {}
        
        void set_pro_fee(double processing_fee);
        
        double get_pro_fee();
        
        double bal_af_fee();
};

#endif