#include <iostream>
#include "medicodebanner.h"
#include "mainmenu.h"
#include "exitprogram.h"
#include "healthcarefacility.h"
#include "patientconsent.h"
#include "patientpersonalinfo.h"
#include "generalquestions.h"
#include <windows.h> 
#include "patientdata.h"
using namespace std;

int main()
{

    SetConsoleOutputCP(CP_UTF8);    

    medicodebanner();

    patientconsent();
PatientData patient;
SymptomData symptoms;
    patientpersonalinfo(patient);

    generalquestions(symptoms);

    mainmenu();


    healthcarefacility();

    exitprogram();

    return 0;
}