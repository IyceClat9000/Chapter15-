#ifndef PREFERREDCUSTOMER_H
#define PREFERREDCUSTOMER_H

#include "CustomerData.h"

class PreferredCustomer : public CustomerData
{
private:
    double purchasesAmount;
    double discountLevel;

public:
    // Pre: none
    // Post: purchasesAmount = 0, discountLevel = 0
    PreferredCustomer();

    // Pre: amount >= 0
    // Post: purchasesAmount increases, discountLevel updated
    void addPurchase(double amount);

    // Pre: none
    // Post: returns total purchasesAmount
    double getPurchasesAmount() const;

    // Pre: none
    // Post: returns current discountLevel
    double getDiscountLevel() const;

    // Pre: purchasesAmount is valid
    // Post: discountLevel updated correctly
    void updateDiscount();
};

#endif