#include "bank_acounts.h"
#include "checking_account.h"
#include "credit_card_account.h"
#include "savings_account.h"
#include <iostream>

using namespace std;

int main()
{
    int bank = 0;
    int savings = 0;
    int checking = 0;
    int credit = 0;
    int deposit = 0;
    int withdrawal = 0;
    char activity;
    
    cout << "Welcome to the Bank of Nick ATM." << endl
         << "Which bank do you use?" << endl
         << "Press 1 for Bank of Nick" << endl
         << "Press 2 for Bank of Butte" << endl
         << "Press 3 for Bank of Chico" << endl;
    cin >> bank;
    
    int again = 0;
    while (again == 0)
    {
        if (bank == 1)
        {
            cout << "How much money do you have in your savings account?" << endl;
            cin >> savings;
            cout << "Thanks to your membership at Bank of Nick, you have 1.99% interst in savings." << endl;
            
            savings_acounts Saving(savings, bank, 0, .0099);
            
            cout << "Would you like to make any deposits or withdrawals?" << endl;
                 << "Press d or w." << endl;
            cin >> activity;
            
            if (activity == d || activity == D)
            {
                cout << "How much would you like to deposit?" << endl;
                cin >> deposit;
                Saving.set_activity(deposit);
                cout << "You now have " << bal_af_int() << " in your savings account." << endl;
            }
            else if (account == w || activity == W)
            {
                cout << "How much would you like to make a withdrawal?" << endl;
                cin >> withdrawal;
                Saving.set_activity(withdrawal);
                cout << "You now have " << withdrawal() << " in your savings_acounts." << endl;
            }
            
            cout << "How much money do you have in your checking account?" << endl;
            cin >> checking;
            
            savings_acounts Checking(checking, bank, 0, 0)
            
            cout << "Would you like to make any deposits or withdrawals?" << endl;
                 << "Press d or w." << endl;
            cin >> activity;
            
            if (activity == d || activity == D)
            {
                cout << "How much would you like to deposit?" << endl;
                cin >> deposit;
                Saving.set_activity(deposit);
                cout << "You now have " << deposit() << " in your checking account." << endl;
            }
            else if (account == w || activity == W)
            {
                cout << "How much would you like to make a withdrawal?" << endl;
                cin >> withdrawal;
                Checking.set_activity(withdrawal);
                cout << "You now have " << withdrawal() << " in your checking account." << endl;
            }
            
            cout << "What is the balance of your credit card?" << endl;
            cin >> credit;
            
            savings_acounts Credit(credit, bank, 0, .0899)
            
            cout << "Would you like to make a payment?" << endl
                 << "Press y or n." << endl;
            cin >> activity;
            
            if (activity == y || activity == Y)
            {
                cout << "How much would you like to pay?" << endl;
                cint >> withdrawal;
                Credit.set_activity(withdrawal);
                cout << "You have " << withdrawal() << " left to pay off." << endl;
                
                cout << get_c_interest() << " interest has been applied to your account." << endl
                     << "You now have " << cbal_af_int() << " left to pay off." << endl; 
            }
             
        }
    }
    
    else if (bank == 2)
    {
        
    }
    
    else if (bank == 3)
    {
        
    }
}