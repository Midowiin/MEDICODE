#include <iostream>
#include "patientconsent.h"
#include "exitprogram.h"
#include "mainmenu.h"

using namespace std;

void patientconsent()
{
    int choice;

    cout << endl;
    cout << "===============================================================" << endl;
    cout << "                      PATIENT CONSENT" << endl;
    cout << "===============================================================" << endl;
    cout << "\033[3m";
    cout << "       Your personal and medical information will be" << endl;
    cout << "       collected to help provide healthcare navigation" << endl;
    cout << "       and connect you with a GP." << endl << endl;
    cout << "\033[0m";


    cout << "1. Agree" << endl;
    cout << "2. Disagree" << endl;
    cin >> choice;

    cout << "===============================================================" << endl;
    cout << endl;
    if (choice == 1)
    {
        mainmenu();
    }
    else if (choice == 2)
    {
        exitprogram();
    }

    else
    {
        cout << "Invalid choice. Please choose either 1 or 2." << endl;
    }
}

int main()
{
    patientconsent();
    return 0;
}


