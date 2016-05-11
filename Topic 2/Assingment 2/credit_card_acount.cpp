#include "credit_card_acount.h"

double cc_acount::cbal_af_int()
{
    double newC = (bank_acounts::withdrawal() * get_c_interest()) + bank_acounts::withdrawal();
    return newC;
}

void cc_acount::set_c_interest(double interest)
{
    interest_ = interest;
}

double cc_acount::get_c_interest()
{
    return interest_;
}