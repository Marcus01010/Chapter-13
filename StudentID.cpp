#include <iostream>
#include <string>
using namespace std;

class Person 
{
  private:
	int age;
  public:

	  Person() 
	  {
		  age = 0;
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

class Student : public Person 
{
  public:
	string student_name;
	void displayAge() 
	{
		cout << getAge() << endl;
	}
};

int main() 
{
	Student student_1;
	int input_age;

	cout << "Enter student name: ";
	getline(cin, student_1.student_name);

	cout << "Enter student age: ";
	cin >> input_age;

	student_1.setAge(input_age);

	cout << "---- Student ID Card ----" << endl;
	cout << "Name: " << student_1.student_name << endl;
	cout << "Age: ";
	student_1.displayAge();
	cout << "Status: Active Student" << endl;
	
	return 0;
}
