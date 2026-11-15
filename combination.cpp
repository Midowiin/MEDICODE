#include <iostream>
#include "medicodebanner.h"
#include "mainmenu.h"
#include "exitprogram.h"
#include "healthcarefacility.h"
#include "patientconsent.h"
#include "patientpersonalinfo.h"
#include "generalquestions.h"

using namespace std;

int main()
{
    medicodebanner();

    mainmenu();

    patientconsent();

    patientpersonalinfo();

    generalquestions();

    healthcarefacility();

    exitprogram();

    return 0;
}