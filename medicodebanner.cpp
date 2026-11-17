#include <iostream>
#include "medicodebanner.h"
#include <string>
#include <windows.h>

using namespace std;


void medicodebanner()
{


    string code;
    int choice;

    cout << "Input USSD: ";
    cin >> code;

    if (code == "2")
    {
        
        cout << "\033[1;38;5;88m";

cout << R"(

███    ███ ███████ ██████  ██  ██████  ██████  ██████  ███████ 
████  ████ ██      ██   ██ ██ ██      ██    ██ ██   ██ ██      
██ ████ ██ █████   ██   ██ ██ ██      ██    ██ ██   ██ █████    
██  ██  ██ ██      ██   ██ ██ ██      ██    ██ ██   ██ ██        
██      ██ ███████ ██████  ██  ██████  ██████  ██████  ███████ 
)" << endl;

cout << "\033[0m";
        cout << "\033[1m";
        cout << "A USSD Code for Non-critical Medical Assistance." << endl;
        cout << "MEDICODE USSD CODE: *206#" << endl << endl;
        cout << "\033[0m";

        cout << "\033[1;90m";
        cout << "----------------------------------------------------------------------------------" << endl; 
        cout << "\033[0m"; 
        cout << endl; 
       
        cout << "DISCLAIMER:" << endl;
        cout << "\033[3m";
        cout << "MEDICODE asks questions about your symptoms and" << endl;
        cout << "connects you to available General Practitioners (GPs)" << endl;
        cout << "who can provide general health guidance." << endl << endl;

        cout << "It caters only to Green Triage cases, which are" << endl;
        cout << "generally non-emergency conditions that are bearable" << endl;
        cout << "and can wait for routine medical assessment." << endl << endl;

        cout << "A GP may refer you to a Specialized Practitioner" << endl;
        cout << "if necessary." << endl << endl;

        cout << "MEDICODE does not directly diagnose illnesses or" << endl;
        cout << "provide Specialized Practitioner consultations." << endl;
        cout << "\033[0m";

        cout << "\033[1;90m";
        cout << "----------------------------------------------------------------------------------" << endl; 
        cout << "\033[0m"; 
        cout << endl; 

        cout << endl;
        cout << "1. Proceed" << endl;
        cout << "2. No" << endl;
        cin >> choice;

        if (choice == 1)
        {
            cout << "Proceeding to Patient Consent..." << endl;
        }
        else if (choice == 2)
        {
            cout << "END PROGRAM" << endl;
        }
        else
        {
            cout << "Please choose either 1 or 2." << endl;
        }
    }
    else
    {
        cout << "USSD Invalid. Please Try Again." << endl;
    }

}

int main()
{
      SetConsoleOutputCP(CP_UTF8);    
    medicodebanner();
    return 0;
}