#include <iostream>
#include "mainmenu.h"

using namespace std;

void mainmenu()
{
    int choice;

    cout << endl;
    cout << "========================================" << endl;
    cout << "              MAIN MENU" << endl;
    cout << "========================================" << endl;

    cout << "1. REQUEST A DOCTOR" << endl;
    cout << "2. PATIENT PROFILE" << endl;
    cout << "3. EXIT" << endl;

    cin >> choice;

    switch (choice)
    {
        case 1:

            cout << "general ques" << endl;

            break;

        case 2:

            break;

        case 3:

            cout << "exiting program..." << endl;

            break;

        default:

            cout << "Please choose a valid option." << endl;

            
    }
}
