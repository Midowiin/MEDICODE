
#include <iostream>
#include "mainmenu.h"
#include "generalquestions.h"
#include "patientpersonalinfo.h"
#include "exitprogram.h"

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

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
        {
            generalquestions();
            break;
        }

        case 2:
        {
            cout << endl;
            cout << "Accessing Patient Profile..." << endl;
            patientpersonalinfo();
            break;
        }

        case 3:
        {
            exitprogram();
            break;
        }

        default:
        {
            cout << "Please choose a valid option." << endl;
            break;
        }
    }
}
