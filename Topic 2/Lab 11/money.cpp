#include "money.h"

// The Constructor, Accessors and Mutators have been defined for you
Money::Money(int dollars, int cents)
      : dollars_(dollars),
        cents_(cents) {
}


int Money::dollars() const {
    return dollars_;
}

int Money::cents() const {
    return cents_;
}

void Money::set_dollars(int dollars) {
  dollars_ = dollars;
}

void Money::set_cents(int cents) {
  cents_ = cents;
}

// This function definition provided as an example and is FULLY COMPLETE
const Money operator +(const Money& amount1, const Money& amount2) {
  // Get all the cents of object 1
  int all_cents1 = amount1.cents_ + amount1.dollars_ * 100;
  // Get all the cents of object 2
  int all_cents2 = amount2.cents_ + amount2.dollars_ * 100;
  // Add all the cents together
  int sum_all_cents = all_cents1 + all_cents2;
  // Handle the fact that money can be negative
  int abs_all_cents = abs(sum_all_cents);
  int final_dollars = abs_all_cents / 100;
  int final_cents = abs_all_cents % 100;
  // If the result of the operation was negative, negate final dollars and cents
  if (sum_all_cents < 0) {
    final_dollars = -final_dollars;
    final_cents = -final_cents;
  }
  return Money(final_dollars, final_cents);
}

// REST OF CLASS FUNCTION DEFINITIONS GO HERE
const Money operator -(const Money& amount1, const Money& amount2)
{
    int all_cents1 = amount1.cents_ + amount1.dollars_ * 100;
    
    int all_cents2 = amount2.cents_ + amount2.dollars_ * 100;
    
    int sum_all_cents = all_cents1 - all_cents2;
    
    int abs_all_cents = abs(sum_all_cents);
    int final_dollars = abs_all_cents / 100;
    int final_cents = abs_all_cents % 100;
    
    if (sum_all_cents < 0)
    {
      final_dollars = -final_dollars;
      final_cents = -final_cents;
    }
    return Money(final_dollars, final_cents);
}

bool operator ==(const Money &amount1, const Money &amount2)
{
  int all_cents1 = amount1.cents_ + amount1.dollars_ * 100;
  
  int all_cents2 = amount2.cents_ + amount2.dollars_ * 100;
  
  if (all_cents1 == all_cents2)
  {
    return true;
  }
  else
  {
    return false;
  }
}

const Money operator -(const Money &amount)
{
  int negative1 = amount.cents_;
  int negative2 = amount.dollars_;
  
  negative1 = -negative1;
  negative2 = -negative2;
  
  return Money(negative2, negative1);
}

ostream& operator <<(ostream &out, const Money &amount)
{
   int final_cents = amount.cents_ % 100;
   int abs_cents = abs(final_cents);

   int final_dollars = amount.dollars_;

  out << "$";
  out << final_dollars << "." << setfill('0') << setw(2) << abs_cents;
}