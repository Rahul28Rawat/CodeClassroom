// Create a class Hospital which contain three variable no of bed,no of patient,no of doctor Constructor then make function 1) Aditting patient 2)Discard Patient
#include <iostream>
using namespace std;
class Hospital
{
private:
    int no_of_bed = 13;
    int no_of_patient = 7;
    int no_of_doctor = 20;

public:
    string *Patient_Name;
    string name;
    string location;
    void patient_name_printer()
    {
        // for(int i=0;i<3;i++){
        //   cout<<"Patient name is"<<Patient_Name[i]<<endl;
        //}
        cout << "patient list of hospital : " << name << endl;
        cout << "location : " << location << endl;
        cout << "Patient 1: " << Patient_Name[0] << endl;
        cout << "Patient 2: " << Patient_Name[1] << endl;
        cout << "Patient 3: " << Patient_Name[2] << endl
             << endl;
    }

    Hospital(string name, string location, int no_of_bed, int no_of_patient, int no_of_doctor)
    {
        this->name = name;
        this->location = location;
        string *arr = new string[3]; // 1000
        arr[0] = "jay";
        arr[1] = "ram";
        arr[2] = "payal";
        this->Patient_Name = &(arr[0]);
        this->no_of_bed = no_of_bed;
        this->no_of_patient = no_of_patient;
        this->no_of_doctor = no_of_doctor;
    }
    // void Admit()
    // {
    //     ++no_of_patient;
    //     cout << "New patient is added to the Hospital" << endl;
    //     cout << "No of patient is" << no_of_patient << endl;
    // }
    // void discard()
    // {
    //     --no_of_patient;
    //     cout << "Patient has got discard" << endl;
    //     cout << "No of patient is" << no_of_patient << endl;
    // }
    // void detail()
    // {
    //     cout << "Name of Hospital is " << name << endl;
    //     cout << "Location of Hospital " << location << endl;
    //     cout << "No of bed in Hospital is " << no_of_bed << endl;
    //     cout << "No of patient in Hospital is " << no_of_patient << endl;
    //     cout << "No of doctor in Hospital is " << no_of_doctor << endl;
    // }
    Hospital(Hospital &h1)
    {
        this->name = h1.name;
        string *arr = new string[3];
        this->Patient_Name = arr;
        (this->Patient_Name)[0] = (h1.Patient_Name)[0];
        (this->Patient_Name)[1] = (h1.Patient_Name)[1];
        (this->Patient_Name)[2] = (h1.Patient_Name)[2];
        this->location = "Undefined";
        this->no_of_bed = h1.no_of_bed;
        this->no_of_doctor = h1.no_of_doctor;
        this->no_of_patient = h1.no_of_patient;
    }
};
// h1.patient_Name=1000
// h2.patient_Name=2000
int main()
{
    Hospital h1("Shaurya Hospital", "New Delhi", 12, 10, 23);
    Hospital h2(h1);
    (h1.Patient_Name)[0] = "piyush";
    h1.patient_name_printer();
    h2.patient_name_printer();
}