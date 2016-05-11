#include "bank_acounts.h"
#include "checking_acount.h"
#include "credit_card_acount.h"
#include "savings_acount.h"
#include <iostream>

using namespace std;

int main()
{
    int bank = 0;
    double savings = 0;
    double checking = 0;
    double credit = 0;
    double deposit = 0;
    double withdrawal = 0;
    char activity;
    int account_type;
    
    cout << "Welcome to the Bank of Nick ATM." << endl
         << "Which bank do you use?" << endl
         << "Press 1 for Bank of Nick" << endl
         << "Press 2 for Bank of Butte" << endl
         << "Press 3 for Bank of Chico" << endl;
    cin >> bank;
    
    char again = 'y';
    while (again == 'y' || again == 'Y')
    {
        cout << "Which account would you like to access?" << endl
             << "Press 1 for checking" << endl
             << "Press 2 for savings" << endl
             << "Press 3 for credit" << endl;
        cin >> account_type;
        
        if (account_type == 1)
        {
            cout << "How much money do you have in your checking account?" << endl;
            cin >> checking;
            
            checking_acount Check(checking);
            cout << "Would you like to make a deposit or withdrawal?" << endl
                << "Press D or W." << endl;
            cin >> activity;
            
            if (activity == 'd' || activity == 'D')
            {
                cout << "How much would you like to deposit?" << endl;
                cin >> deposit;
                Check.set_activity(deposit);
                
                cout << "You now have " << Check.deposit() << " in you checking account." << endl;
            }
            
            else if (activity == 'w' || activity == 'W')
            {
                cout << "How much would you like to withdrawal?" << endl;
                cin >> withdrawal;
                Check.set_activity(withdrawal);
                
                cout << "You now have " << Check.bal_af_fee() << " in your checking account." << endl;
            }
            
            cout << "Is there another action you would like to perform?" << endl
                 << "Press Y for yes and N for no." << endl;
            cin >> again;
        }
        else if ( account_type == 2)
        {
            cout << "How much money do you have in your savings account?" << endl;
            cin >> savings;
            
            savings_acounts Save(savings);
        
            cout << "Would you like to make a deposit or withdrawal?" << endl
                << "Press D or W." << endl;
            cin >> activity;
            
            if (activity == 'd' || activity == 'D')
            {
                cout << "How much would you like to deposit?" << endl;
                cin >> deposit;
                Save.set_activity(deposit);
                
                cout << "You now have " << Save.bal_af_int() << " in your savings account." << endl;
            }
            else if (activity == 'w' || activity == 'W')
            {
                cout << "How much would you like to withdrawal?" << endl;
                cin >> withdrawal;
                Save.set_activity(withdrawal);
                
                cout << "You now have " << Save.bal_save_af_fee() << " in your checking account." << endl;
            }
            cout << "Is there another action you would like to perform?" << endl
                 << "Press Y for yes and N for no." << endl;
            cin >> again;
        }
        else if(account_type == 3)
        {
            cout << "How much do you owe on your credit card?" << endl;
            cin >> credit;
            
            cc_acount Credit(credit);
            
            cout << "Would you like to make a payment?" << endl
                << "Press Y or N." << endl;
            cin >> activity;
            
            if(activity == 'Y' || activity == 'y')
            {
                cout << "How much would you like to pay?" << endl;
                cin >> withdrawal;
                Credit.set_activity(withdrawal);
                
                cout << "You now have " << Credit.cbal_af_int() << " left to pay." << endl;
                cout << "Is there another action you would like to perform?" << endl
                     << "Press Y for yes and N for no." << endl;
                cin >> again;
            }
            else if (activity == 'N' || activity == 'n')
            {
                cout << "Is there another action you would like to perform?" << endl
                     << "Press Y for yes and N for no." << endl;
                cin >> again;
            }
        }
    }
}
