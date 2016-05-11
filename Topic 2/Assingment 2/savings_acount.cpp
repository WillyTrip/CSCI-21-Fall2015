#include "savings_acount.h"

double savings_acounts::bal_af_int()
{
    double interest = (bank_acounts::deposit() * get_interest()) + bank_acounts::deposit();
    return interest;
}

void savings_acounts::set_save_pro_fee(double save_pro_fee)
{
    save_pro_fee_ = save_pro_fee;
}

double savings_acounts::get_save_pro_fee()
{
    return save_pro_fee_;
}

double savings_acounts::bal_save_af_fee()
{
    double New_Bal = (bank_acounts::withdrawal() - get_save_pro_fee());
    return New_Bal;
}

void savings_acounts::set_interest(double interest)
{
    interest_ = interest;
}

double savings_acounts::get_interest()
{
    return interest_;
}
