#include <iostream>
#include <string>
using namespace std;

class Person 
{
  private:
	  int age;
	  string gender;
  public:
	Person() 
	{
		  age = 0;
		  gender = "unknown";
	}
	void setGender(string gender) 
	{
		this->gender = gender;
	}

	string getGender() 
	{
		return gender;
	}

	void setAge(int age) 
	{
		this->age = age;
	}

	int getAge() 
	{
		return age;
	}
};

class Patient : public Person 
{
private:
	string patient_name;
	string disease_name;
	string doctor_name;
	int room_number;
	int admitted_days;
	float bill_amount;
public:
	Patient() 
	{
		patient_name = "unknown";
		disease_name = "unknown";
		doctor_name = "unknown";

		room_number = 0;
		admitted_days = 0;
		bill_amount = 0;
	}

	void setDetails(string patient_name, string disease_name, string doctor_name, int room_number, int admitted_days, float bill_amount) 
	{
		this->patient_name = patient_name;
		this->disease_name = disease_name;
		this->doctor_name = doctor_name;
		this->room_number = room_number;
		this->admitted_days = admitted_days;
		this->bill_amount = bill_amount;
	}

	string getPatientName() {
		return patient_name;
	}

	string getDiseaseName() {
		return disease_name;
	}

	string getDoctorName() {
		return doctor_name;
	}

	int getRoomNumber() {
		return room_number;
	}

	int getAdmittedDays() {
		return admitted_days;
	}

	float getBillAmount() {
		return bill_amount;
	}

	void displayDetails() 
	{
		cout << "------Hospital Record -----" << endl;
		cout << "Patient Name: " << getPatientName() << endl;
		cout << "Age: " << getAge() << endl;
		cout << "Gender: " << getGender() << endl;
		cout << "Disease: " << getDiseaseName() << endl;
		cout << "Doctor Assigned: " << getDoctorName() << endl;
		cout << "Day Admitted: " << getAdmittedDays() << endl;
		cout << "Bill Amount: $" << getBillAmount() << endl;

		if (getBillAmount() >= 5000) 
		{
			cout << "Bill Status: High Bill Case" << endl;
		}
		else 
		{
			cout << "Bill Status: Regular Bill Case" << endl;
		}

		if (getAdmittedDays() > 7) 
		{
			cout << "Admission Type: Long Stay" << endl;
		}
		else 
		{
			cout << "Admission Type: Short Stay" << endl;
		}

		cout << "Advice: Patient needs continuous monitoring" << endl;
	}
};

int main() 
{
	Patient patient_1;
	string gender_input;
	string patient_name_input;
	string disease_name_input;
	string doctor_name_input;
	int age_input;
	int room_input;
	int days_admin_input;
	float bill_input;

	cout << "Enter patient name: ";
	getline(cin, patient_name_input);

	cout << "Enter age: ";
	cin >> age_input;

	cin.ignore();
	cout << "Enter gender: ";
	getline(cin, gender_input);

	cout << "Enter disease: ";
	getline(cin, disease_name_input);

	cout << "Enter doctor name: ";
	getline(cin, doctor_name_input);

	cout << "Enter room number: ";
	cin >> room_input;

	cin.ignore();
	cout << "Enter days admitted: ";
	cin >> days_admin_input;

	cout << "Enter bill amount: $";
	cin >> bill_input;

	patient_1.setAge(age_input);
	patient_1.setGender(gender_input);
	patient_1.setDetails(patient_name_input, disease_name_input, doctor_name_input, room_input, days_admin_input, bill_input);

	patient_1.displayDetails();

	return 0;
}
