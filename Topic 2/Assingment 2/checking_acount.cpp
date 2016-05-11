#include "checking_acount.h"

double checking_acount::bal_af_fee()
{
    double newBal = (bank_acounts::withdrawal() - get_pro_fee());
    return newBal;
}

void checking_acount::set_pro_fee(double processing_fee)
{
    processing_fee_ = processing_fee;
}

double checking_acount::get_pro_fee()
{
    return processing_fee_;
}