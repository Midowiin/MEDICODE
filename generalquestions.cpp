
#include <iostream>
#include <string>
#include "generalquestions.h"
#include "patientdata.h"

using namespace std;

void generalquestions(SymptomData &symptomData)
{
    int answers[7] = {};
    int menuChoice;

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

    string symptomChoices[] =
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

    cout << endl;
    cout << "How long have you experienced this problem?" << endl;
    cout << "1. Today - Started today" << endl;
    cout << "2. A Few Days - Lasted 1-3 days." << endl;
    cout << "3. One Week or Longer - Lasted at least 7 days." << endl;
    cout << "4. Not Sure" << endl;

    cin >> answers[0];

    cout << endl;
    cout << "How severe is your concern" << endl;
    cout << "1. Mild - Does not greatly affect daily activities." << endl;
    cout << "2. Moderate - Makes some daily activities difficult." << endl;
    cout << "3. Severe - Makes normal daily activities very difficult." << endl;

    cin >> answers[1];

    cout << endl;
    cout << "How does this concern affect activities?" << endl;
    cout << "1. Not at All - Daily activities are mostly unaffected." << endl;
    cout << "2. Slightly - Some activities are affected." << endl;
    cout << "3. Moderately - Several activities are difficult." << endl;
    cout << "4. Not Sure" << endl;

    cin >> answers[2];

    cout << endl;
    cout << "Is your condition getting worse?" << endl;
    cout << "1. Yes - Becoming more severe." << endl;
    cout << "2. No - Staying the same." << endl;
    cout << "3. Improving - Getting better." << endl;
    cout << "4. Not Sure" << endl;

    cin >> answers[3];

    cout << endl;
    cout << "Do you have other symptoms or concerns?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "3. Back to Previous Question" << endl;
    cout << "4. Back to Main Menu" << endl;

    cin >> answers[4];

    cout << endl;
    cout << "Are you experiencing any urgent warning signs?" << endl;
    cout << "1. Difficulty breathing" << endl;
    cout << "2. Chest pain or pressure" << endl;
    cout << "3. Fainting or sudden confusion" << endl;
    cout << "4. Severe allergic reaction" << endl;
    cout << "5. Feeling unsafe or needing immediate mental health support" << endl;
    cout << "6. None of These" << endl;
    cout << "7. Back to Previous Question" << endl;

    cin >> answers[5];

    cout << endl;
    cout << "Have you taken any medication or received any treatment for this concern?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "3. Not Applicable" << endl;
    cout << "4. Back to Previous Question" << endl;
    cout << "5. Back to Main Menu" << endl;

    cin >> answers[6];

    // Store selected answers in SymptomData

    symptomData.duration =
        (answers[0] >= 1 && answers[0] <= 4)
        ? durations[answers[0]] : "Invalid";

    symptomData.severity =
        (answers[1] >= 1 && answers[1] <= 3)
        ? severities[answers[1]] : "Invalid";

    symptomData.impact =
        (answers[2] >= 1 && answers[2] <= 4)
        ? impacts[answers[2]] : "Invalid";

    symptomData.progression =
        (answers[3] >= 1 && answers[3] <= 4)
        ? progressions[answers[3]] : "Invalid";

    symptomData.symptoms =
        (answers[4] >= 1 && answers[4] <= 4)
        ? symptomChoices[answers[4]] : "Invalid";

    symptomData.warningSigns =
        (answers[5] >= 1 && answers[5] <= 7)
        ? warningSigns[answers[5]] : "Invalid";

    symptomData.medications =
        (answers[6] >= 1 && answers[6] <= 5)
        ? medications[answers[6]] : "Invalid";

    // Store the complete symptom summary

    symptomData.concernSummary =
        "Duration: " + symptomData.duration +
        "\nSeverity: " + symptomData.severity +
        "\nImpact on Activities: " + symptomData.impact +
        "\nProgression: " + symptomData.progression +
        "\nOther Symptoms: " + symptomData.symptoms +
        "\nUrgent Signs: " + symptomData.warningSigns +
        "\nMedication/Treatment: " + symptomData.medications;

    cout << endl;
    cout << "1. View Symptom Summary" << endl;
    cout << "2. Connect to an Available General Practitioner" << endl;
    cout << "3. View General Health Guidance" << endl;
    cout << "4. Back to Main Menu" << endl;
    cout << "5. Exit" << endl;

    cin >> menuChoice;

    if (menuChoice == 1)
    {
        cout << endl;
        cout << "===============================" << endl;
        cout << "        SYMPTOM SUMMARY" << endl;
        cout << "===============================" << endl;

        cout << symptomData.concernSummary << endl;

        cout << "===============================" << endl;
    }
}
