#include "bank_acounts.h"

double bank_acounts::withdrawal()
{
    double Bal = (get_balance() - get_activity());
    return Bal;
}

double bank_acounts::deposit()
{
    double Bal = (get_balance() + get_activity());
    return Bal;
}

void bank_acounts::set_balance(double balance)
{
    balance_ = balance;
}

void bank_acounts::set_bank_name(string bank_name)
{
    bank_name_ = bank_name;
}

void bank_acounts::set_activity(double activity)
{
    activity_ = activity;
}

double bank_acounts::get_activity()
{
    return activity_;
}

double bank_acounts::get_balance()
{
    return balance_;
}

string bank_acounts::get_bank_name()
{
    return bank_name_;
}

