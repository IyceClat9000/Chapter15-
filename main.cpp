#include<iostream>
#include<iomanip>
#include"input.h"
#include "Employee.h"
#include "ProductionWorker.h"
#include "TeamLeader.h"
#include "MilTime.h"

int menuOption();
//function prototypes
void Challenge3();
void Challenge4();

int main()
{
    do
    {
        system("cls");
        switch (menuOption())
        {
        case 0: exit(1); break;
        case 3: Challenge3(); break;
        case 4: Challenge4(); break;
//        case 6: Challenge6(); break;
//        case 7: Challenge7(); break;
//        case 8: Challenge8(); break;
//        case 12: Challenge12(); break; // 10pts extra
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }
        cout << "\n";
        system("pause");

    } while (true);

    return EXIT_SUCCESS;
}

int menuOption()
{
    cout << "\n\tChapter 15";
    cout << "\n\t" << string(60, char(205));
    cout << "\n\t3. Challenge 3";
    cout << "\n\t4. Time Format";
    cout << "\n\t" << string(60, char(196));
    cout << "\n\t0.exit";
    cout << "\n\t" << string(60, char(205));

    return inputInteger("\n\tOption: ", 0, 12);

}

void Challenge3()
{

    Employee testEmp; //testing my base class

    testEmp.setName(inputString("\n\tEnter the employee name: ", true));
    testEmp.setNumber(inputInteger("\n\tEnter the employee number : ", true));
    testEmp.setDate(inputString("\n\tEnter the employee hire date: ", false));

    cout << testEmp << "\n";

    ProductionWorker testPw; //test the drived class

    testPw.setName(inputString("\n\tEnter the production worker name: ", true));
    testPw.setNumber(inputInteger("\n\tEnter the production worker number : ", true));
    testPw.setDate(inputString("\n\tEnter the production worker hire date: ", false));
    testPw.setShift(inputInteger("\n\tEnter a shift (1-day or 2-night) for the production worker: ", 1, 2));
    testPw.setRate(inputDouble("\n\tEnter hire rate for the production worker : $", 1.00, 25.00));

    cout << testPw << "\n";

    TeamLeader testLead;

    testLead.setName(inputString("\n\tEnter the team leader name: ", true));
    testLead.setNumber(inputInteger("\n\tEnter the team leader number : ", true));
    testLead.setDate(inputString("\n\tEnter the team leader worker hire date: ", false));
    testLead.setShift(inputInteger("\n\tEnter a shift (1-day or 2-night) for the team leader: ", 1, 2));
    testLead.setRate(inputDouble("\n\tEnter hire rate for the production worker : $", 1.00, 25.00));
    testLead.setBonus(inputDouble("\n\tEnter the bonus amount: $", true));
    testLead.setTrainingHours(inputInteger("\n\tEnter the training hours: ", 1, 10));

    cout << testLead;

}

void Challenge4()
{
    system("cls");
    MilTime time;
    int military_hours = 0;
    do
    {
        if (military_hours % 100 >= 60)
        {
            cout << "Make sure the first 2 digits are under 60.";
        }
        military_hours = inputInteger("\n\tEnter the military hours (0 - 2400): ", 0, 2400);
    } while (military_hours % 100 >= 60);
    int military_seconds = inputInteger("\n\tEnter the military seconds (0 - 59): ", 0, 59);
    time.setTime(military_hours, military_seconds);

    cout << "\n\n\tMilitary Format: " << setfill('0') << setw(4) << time.getHour() << " hours and " << setw(2) << time.getSec() << " seconds.";
    cout << "\n\tStandard Format: " << setfill('0') << setw(2) << time.getStandHr() << ":" << setw(2) << time.getMin() << ":" << setw(2) << time.getSec() << " " << time.getTimeOfDay();
}
