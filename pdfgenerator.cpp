
#include <iostream>
#include <cstdio>
#include "pdfgenerator.h"
#include "PDFGen/pdfgen.h"

using namespace std;

void generatePatientPDF(const PatientData &patient, const SymptomData &symptomData)
{
    struct pdf_info info = {};

    snprintf(info.creator, sizeof(info.creator), "MEDICODE");
    snprintf(info.title, sizeof(info.title), "Patient Summary");

    pdf_doc *pdf = pdf_create(PDF_A4_WIDTH, PDF_A4_HEIGHT, &info);

    if (pdf == NULL)
    {
        cout << "PDF creation failed!";
        return;
    }

    pdf_set_font(pdf, "Helvetica");
    pdf_append_page(pdf);

    pdf_add_text(pdf, NULL, "MEDICODE", 24, 50, 780, PDF_BLACK);
    pdf_add_text(pdf, NULL, "PATIENT SUMMARY", 16, 50, 740, PDF_BLACK);

    pdf_add_text(pdf, NULL, "PATIENT INFORMATION", 14, 50, 700, PDF_BLACK);

    pdf_add_text(pdf, NULL, ("Patient ID: " + patient.patientID).c_str(), 12, 50, 675, PDF_BLACK);
    pdf_add_text(pdf, NULL, ("Name: " + patient.name).c_str(), 12, 50, 655, PDF_BLACK);
    pdf_add_text(pdf, NULL, ("Age: " + patient.age).c_str(), 12, 50, 635, PDF_BLACK);
    pdf_add_text(pdf, NULL, ("Sex: " + patient.sex).c_str(), 12, 50, 615, PDF_BLACK);
    pdf_add_text(pdf, NULL, ("Address: " + patient.address).c_str(), 12, 50, 595, PDF_BLACK);
    pdf_add_text(pdf, NULL, ("Civil Status: " + patient.civilStatus).c_str(), 12, 50, 575, PDF_BLACK);

    pdf_add_text(pdf, NULL, "SYMPTOM SUMMARY", 14, 50, 535, PDF_BLACK);

    pdf_add_text(pdf, NULL, ("Duration: " + symptomData.duration).c_str(), 12, 50, 510, PDF_BLACK);
    pdf_add_text(pdf, NULL, ("Severity: " + symptomData.severity).c_str(), 12, 50, 490, PDF_BLACK);
    pdf_add_text(pdf, NULL, ("Impact: " + symptomData.impact).c_str(), 12, 50, 470, PDF_BLACK);
    pdf_add_text(pdf, NULL, ("Progression: " + symptomData.progression).c_str(), 12, 50, 450, PDF_BLACK);
    pdf_add_text(pdf, NULL, ("Other Symptoms: " + symptomData.symptoms).c_str(), 12, 50, 430, PDF_BLACK);
    pdf_add_text(pdf, NULL, ("Warning Signs: " + symptomData.warningSigns).c_str(), 12, 50, 410, PDF_BLACK);
    pdf_add_text(pdf, NULL, ("Medication/Treatment: " + symptomData.medications).c_str(), 12, 50, 390, PDF_BLACK);

    int result = pdf_save(pdf, "MEDICODE_Summary.pdf");

    pdf_destroy(pdf);

    if (result >= 0)
    {
        cout << "PDF generated successfully!" << endl;
    }
    else
    {
        cout << "PDF generation failed!" << endl;
    }
}
