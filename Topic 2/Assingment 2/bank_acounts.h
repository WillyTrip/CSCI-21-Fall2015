#ifndef LAB_A
#define LAB_A

#include <string>
#include <iostream>

using namespace std;

class bank_acounts
{
    protected:
    
        double balance_;
        string bank_name_;
        double activity_;
        
    public:
    
        bank_acounts(double balance = 0, string bank_name = "Bank of Nick", double activity = 0)
            :balance_(balance), bank_name_(bank_name), activity_(activity)
            {}
            
        void set_balance(double balance);
        void set_bank_name(string bank_name);
        void set_activity(double activity);
        
        double get_activity();
        double get_balance();
        string get_bank_name();
        
        double withdrawal();
        double deposit();
};

#endif