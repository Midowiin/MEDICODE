#include <iostream>
#include "medicodebanner.h"
#include "mainmenu.h"
#include "exitprogram.h"
#include "healthcarefacility.h"
#include "patientconsent.h"
#include "patientpersonalinfo.h"
#include "generalquestions.h"
#include <windows.h> 

using namespace std;

int main()
{

    SetConsoleOutputCP(CP_UTF8);    

    medicodebanner();

    patientconsent();

    patientpersonalinfo();

    mainmenu();

    generalquestions();

    healthcarefacility();

    exitprogram();

    return 0;
}