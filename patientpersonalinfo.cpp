#include <iostream>
#include "patientpersonalinfo.h"

using namespace std;

void patientpersonalinfo()
{
    int choice;

    cout << endl;
    cout << "PATIENT'S INFORMATION" << endl;

    cout << endl;
    cout << "USER ID AND INFORMATION" << endl;

    cout << "Patient ID: " << "assignedPatientID" << endl;

    cout << endl;
    cout << "1. Proceed" << endl;
    cout << "2. Exit" << endl;
    cin >> choice;

    if (choice == 1)
    {
        cout << "main menu";
    }
    else
    {
        cout << "MEDICODE - Quick Care, For A More Convenient Healthcare!" << endl;
        cout << "Thank you for using MEDICODE." << endl;
    }
}

    