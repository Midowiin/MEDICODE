
#include <iostream>
#include <string>
#include <limits>
#include "generalquestions.h"

using namespace std;

int getChoice(int min, int max)
{
    int choice;

    while (true)
    {
        cout << "Enter your choice: ";

        if (cin >> choice && choice >= min && choice <= max)
        {
            return choice;
        }

        cout << "Invalid input. Please choose from "
             << min << " to " << max << "." << endl;

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void generalquestions()
{
    
    int concern_summary[8] = {};

    
    cout << endl;
    cout << "How long have you experienced this problem?" << endl;
    cout << "1. Today - Started today" << endl;
    cout << "2. A Few Days - Lasted 1-3 days." << endl;
    cout << "3. One Week or Longer - Lasted at least 7 days." << endl;
    cout << "4. Not Sure" << endl;

    concern_summary[0] = getChoice(1, 4);

    
    cout << endl;
    cout << "How severe is your concern?" << endl;
    cout << "1. Mild - Does not greatly affect daily activities." << endl;
    cout << "2. Moderate - Makes some daily activities difficult." << endl;
    cout << "3. Severe - Makes normal daily activities very difficult." << endl;

    concern_summary[1] = getChoice(1, 3);

    
    cout << endl;
    cout << "How does this concern affect activities?" << endl;
    cout << "1. Not at All - Daily activities are mostly unaffected." << endl;
    cout << "2. Slightly - Some activities are affected." << endl;
    cout << "3. Moderately - Several activities are difficult." << endl;
    cout << "4. Not Sure" << endl;

    concern_summary[2] = getChoice(1, 4);

    
    cout << endl;
    cout << "Is your condition getting worse?" << endl;
    cout << "1. Yes - Becoming more severe." << endl;
    cout << "2. No - Staying the same." << endl;
    cout << "3. Improving - Getting better." << endl;
    cout << "4. Not Sure" << endl;

    concern_summary[3] = getChoice(1, 4);


    cout << endl;
    cout << "Do you have other symptoms or concerns?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "3. Back to Previous Question" << endl;
    cout << "4. Back to Main Menu" << endl;

    concern_summary[4] = getChoice(1, 4);

    
    cout << endl;
    cout << "Are you experiencing any urgent warning signs?" << endl;
    cout << "1. Difficulty breathing" << endl;
    cout << "2. Chest pain or pressure" << endl;
    cout << "3. Fainting or sudden confusion" << endl;
    cout << "4. Severe allergic reaction" << endl;
    cout << "5. Feeling unsafe or needing immediate mental health support" << endl;
    cout << "6. None of These" << endl;
    cout << "7. Back to Previous Question" << endl;

    concern_summary[5] = getChoice(1, 7);

    
    cout << endl;
    cout << "Have you taken any medication or received any treatment for this concern?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "3. Not Applicable" << endl;
    cout << "4. Back to Previous Question" << endl;
    cout << "5. Back to Main Menu" << endl;

    concern_summary[6] = getChoice(1, 5);

    // Final Menu
    cout << endl;
    cout << "========================================" << endl;
    cout << "             NEXT OPTIONS" << endl;
    cout << "========================================" << endl;
    cout << "1. View Symptom Summary" << endl;
    cout << "2. Connect to an Available General Practitioner" << endl;
    cout << "3. View General Health Guidance" << endl;
    cout << "4. Back to Main Menu" << endl;
    cout << "5. Exit" << endl;

    concern_summary[7] = getChoice(1, 5);

    // Arrays for converting numerical answers into descriptions
    string durations[] =
    {
        "",
        "Today",
        "A Few Days",
        "One Week or Longer",
        "Not Sure"
    };

    string severities[] =
    {
        "",
        "Mild",
        "Moderate",
        "Severe"
    };

    string impacts[] =
    {
        "",
        "Not at All",
        "Slightly",
        "Moderately",
        "Not Sure"
    };

    string progressions[] =
    {
        "",
        "Yes - Becoming more severe",
        "No - Staying the same",
        "Improving - Getting better",
        "Not Sure"
    };

    string symptoms[] =
    {
        "",
        "Yes",
        "No",
        "Back to Previous Question",
        "Back to Main Menu"
    };

    string warningSigns[] =
    {
        "",
        "Difficulty breathing",
        "Chest pain or pressure",
        "Fainting or sudden confusion",
        "Severe allergic reaction",
        "Feeling unsafe or needing immediate mental health support",
        "None of These",
        "Back to Previous Question"
    };

    string medications[] =
    {
        "",
        "Yes",
        "No",
        "Not Applicable",
        "Back to Previous Question",
        "Back to Main Menu"
    };

    // Process Final Menu Selection
    switch (concern_summary[7])
    {
        case 1:
        {
            cout << endl;
            cout << "========================================" << endl;
            cout << "             SYMPTOM SUMMARY" << endl;
            cout << "========================================" << endl;

            cout << "Duration: "
                 << durations[concern_summary[0]] << endl;

            cout << "Severity: "
                 << severities[concern_summary[1]] << endl;

            cout << "Impact on Activities: "
                 << impacts[concern_summary[2]] << endl;

            cout << "Progression: "
                 << progressions[concern_summary[3]] << endl;

            cout << "Other Symptoms: "
                 << symptoms[concern_summary[4]] << endl;

            cout << "Urgent Signs: "
                 << warningSigns[concern_summary[5]] << endl;

            cout << "Medication/Treatment: "
                 << medications[concern_summary[6]] << endl;

            cout << "========================================" << endl;

            if (concern_summary[5] >= 1 &&
                concern_summary[5] <= 5)
            {
                cout << endl;
                cout << "IMPORTANT: You selected an urgent warning sign." << endl;
                cout << "Seek immediate professional medical assistance." << endl;
                cout << "Do not wait for an automated consultation." << endl;
            }

            break;
        }

        case 2:
        {
            cout << endl;
            cout << "Connecting to an Available General Practitioner..." << endl;
            cout << "Doctor connection feature is not yet implemented." << endl;
            break;
        }

        case 3:
        {
            cout << endl;
            cout << "Accessing General Health Guidance..." << endl;
            cout << "Health guidance feature is not yet implemented." << endl;
            break;
        }

        case 4:
        {
            cout << endl;
            cout << "Returning to Main Menu..." << endl;
            break;
        }

        case 5:
        {
            cout << endl;
            cout << "Exiting MEDICODE..." << endl;
            break;
        }
    }
}

// TEMPORARY MAIN FUNCTION FOR INDEPENDENT TESTING
int main()
{
    generalquestions();
    return 0;
}
