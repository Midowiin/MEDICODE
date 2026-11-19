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
    
    medicodebanner();

    patientconsent();

    mainmenu();

    patientpersonalinfo();

    return 0;
}