#ifndef LAB_B
#define LAB_B

#include <string>
#include <iostream>
#include "bank_acounts.h"

using namespace std;

class savings_acounts : public bank_acounts
{
    private:
    
        double interest_;
        double save_pro_fee_;
        //double savings_balance_;
        
    public:
    
        savings_acounts(double balance = 0, string bank_name = "Bank of Nick",
                        double activity = 0, double interest = 0.01, double save_pro_fee = 2.5) //double savings_balance = 0)
                        :bank_acounts(balance, bank_name, activity), interest_(interest), save_pro_fee_(save_pro_fee) //savings_balance_(savings_balance)
                        {}
                        
        void set_interest(double interest);
        //void set_savings_balance(double savings_balance);
        
        //double get_savings_balance();
        double get_interest();
        
        double bal_af_int();
        
        void set_save_pro_fee(double save_pro_fee);
        
        double get_save_pro_fee();
        
        double bal_save_af_fee();
};

#endif