#ifndef PREFERREDCUSTOMER_H
#define PREFERREDCUSTOMER_H

#include "CustomerData.h"

class PreferredCustomer : public CustomerData
{
private:
    double purchasesAmount;
    double discountLevel;

public:
    PreferredCustomer();
    void addPurchase(double amount);
    double getPurchasesAmount() const;
    double getDiscountLevel() const;
    void updateDiscount();
};

#endif
