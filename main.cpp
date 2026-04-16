// Aleeza Irshad
// 4/15/2026
// Chapter 15
#include<iostream>
#include<iomanip>
#include<cctype>
#include<string>
#include <cstring>
#include "input.h"
#include "CustomerData.h"
#include "PreferredCustomer.h"

using namespace std;

int menuOption();

//function prototypes
void Challenge8();

bool validPhone(const char* phone);
bool validName(const char* name);


// Pre: none
// Post: runs program until user exits
int main()
{
    do
    {
        system("cls");

        switch (menuOption())
        {
        case 0: exit(1); break;
            // case 3: Challenge3(); break;
            // case 4: Challenge4(); break;
            // case 6: Challenge6(); break;
            // case 7: Challenge7(); break;
        case 8: Challenge8(); break;
            // case 12: Challenge12(); break; // 10pts extra
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }

        cout << "\n";
        system("pause");

    } while (true);

    return EXIT_SUCCESS;
}


// Pre: none
// Post: displays menu and returns valid option
int menuOption()
{
    cout << "\n\tChapter 15";
    cout << "\n\t" << string(60, char(205));
    cout << "\n\t3. TeamLeader Class";
    cout << "\n\t4. Time Format";
    cout << "\n\t6. Essay Class";  
    cout << "\n\t7. Person Data and Customer Data Classes";
    cout << "\n\t8. Preferred Customer Class";
    cout << "\n\t12.Ship, CruiseShip, and CargoShip Classes";
    cout << "\n\t" << string(60, char(196));
    cout << "\n\t0. Exit";
    cout << "\n\t" << string(60, char(205));

    return inputInteger("\n\tOption: ", 0, 12);
}

void Challenge8()
{
    system("cls");

    PreferredCustomer customer;
    cout << "8. PreferredCustomer Class\n";
    cout << string(100, char(196)) << "\n\n";
    cout << "Input customer's data...\n";

    customer.setCustomerNumber(inputInteger("\tEnter an unique ID number: ", true));
    customer.setLastName(inputString("\tEnter the last name: ", true).c_str());
    customer.setFirstName(inputString("\tEnter the first name: ", true).c_str());
    customer.setAddress(inputString("\tEnter the address: ", true).c_str());
    customer.setCity(inputString("\tEnter the city: ", true).c_str());
    customer.setState(inputString("\tEnter the state: ", true).c_str());
    customer.setZip(inputString("\tEnter the zipcode: ", false).c_str());
    customer.setPhone(inputString("\tEnter the phone number: ", false).c_str());
    customer.setMailingList(inputInteger("\tBe on mailing list (0-no or 1-yes): ", 0, 1));

    char choice = 'Y';
    do
    {
        double amount = inputDouble("\n\tEnter the purchased amount: $", 0.0, true);
        customer.addPurchase(amount);
        choice = inputChar("\n\tContinue (Y-yes or N-no)? ", 'Y', 'N');
    } while (choice == 'Y');

    cout << "\nOutput Customer's Information...\n\n";

    cout << "\tID number              : " << customer.getCustomerNumber() << "\n";
    cout << "\tLast name              : " << customer.getLastName() << "\n";
    cout << "\tFirst name             : " << customer.getFirstName() << "\n";
    cout << "\tAddress                : " << customer.getAddress() << "\n";
    cout << "\t                         " << customer.getCity() << ", " << customer.getState() << " " << customer.getZip() << "\n";
    cout << "\tPhone                  : " << customer.getPhone() << "\n";
    cout << "\tMailing list           : " << customer.getMailingList() << "("
         << (customer.getMailingList() ? "yes" : "no") << ")\n";
    cout << fixed << setprecision(0);
    cout << "\tTotal purchases        : $" << customer.getPurchasesAmount() << "\n";
    cout << fixed << setprecision(2);
    cout << "\tCurrent discount level : " << customer.getDiscountLevel() << "\n";
}


// validation functions
bool validPhone(const char* phone)
{
    if (strlen(phone) != 12) return false;

    for (int i = 0; i < 12; i++)
    {
        if ((i == 3 || i == 7) && phone[i] != '-') return false;
        if ((i != 3 && i != 7) && !isdigit(phone[i])) return false;
    }
    return true;
}

bool validName(const char* name)
{
    for (int i = 0; name[i] != '\0'; i++)
        if (isdigit(name[i])) return false;

    return strlen(name) > 0;
}