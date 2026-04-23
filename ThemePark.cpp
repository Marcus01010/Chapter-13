#include <iostream>
#include <string>
using namespace std;

class Visitor 
{
private:
	int visitor_id;
	string city;
public:
	Visitor() 
	{
		visitor_id = 0;
		city = "unknown";
	}

	void setCity(string city) 
	{
		this->city = city;
	}

	string getCity() 
	{
		return city;
	}

	void setID(int visitor_id) 
	{
		this->visitor_id = visitor_id;
	}

	int getID() {
		return visitor_id;
	}
};

class PremiumVisitor : public Visitor 
{
private:
	string visitor_name;
	string pass_type;
	int number_of_rides;
	int number_of_guests;
	float total_spending;
	string locker_required;
public:
	PremiumVisitor() 
	{
		visitor_name = "unknown";
		pass_type = "unknown";
		number_of_rides = 0;
		number_of_guests = 0;
		total_spending = 0;
		locker_required = "unknown";
	}

	void setDetails(string visitor_name, string pass_type, int number_of_rides, int number_of_guests, float total_spending, string locker_required) 
	{
		this->visitor_name = visitor_name;
		this->pass_type = pass_type;
		this->number_of_rides = number_of_rides;
		this->number_of_guests = number_of_guests;
		this->total_spending = total_spending;
		this->locker_required = locker_required;
	}

	string getName() {
		return visitor_name;
	}

	string getPass() {
		return pass_type;
	}

	int getRideNumber() {
		return number_of_rides;
	}

	int getGuestNumber() {
		return number_of_guests;
	}

	float getTotalSpending() {
		return total_spending;
	}

	string getLockerRequirement() {
		return locker_required;
	}

	string LoungeAccess() 
	{
		if (getGuestNumber() > 3) {
			return "Yes";
		}
		else 
		{
			return "No";
		}
	}

	string FoodCoupon() 
	{
		if (getTotalSpending() >= 3000) 
		{
			return "Eligible";
		}
		else 
		{
			return "Not Eligible";
		}
	}

	string VisitorCategory() 
	{
		if ((getPass() == "Gold") or (getPass() == "Platinum"))
		{
			return "Premium Fast Track";
		}
		else 
		{
			return "Standard Premium";
		}
	}

	void displayDetails() 
	{
		cout << "----- Adventure Park Premium Pass -----" << endl;
		cout << "Visitor Name: " << getName() << endl;
		cout << "Visitor ID: " << getID() << endl;
		cout << "City: " << getCity() << endl;
		cout << "Pass Type: " << getPass() << endl;
		cout << "Rides Selected: " << getRideNumber() << endl;
		cout << "Guests Count: " << getGuestNumber() << endl;
		cout << "Total Spending: $" << getTotalSpending() << endl;
		cout << "Locker Requied: " << getLockerRequirement() << endl;
		cout << "Lounge Access: " << LoungeAccess() << endl;
		cout << "Food Coupon: " << FoodCoupon() << endl;
		cout << "Visitor Category: " << VisitorCategory() << endl;
		cout << "Reminder: Please arrive 30 minutes early" << endl;
	}
};

int main()
{
	PremiumVisitor visitor_1;
	string name_input;
	string locker_input;
	string pass_input;
	string city_input;
	int id_input;
	int ride_input;
	int guest_input;
	float spending_input;

	cout << "Enter visitor name: ";
	getline(cin, name_input);

	cout << "Enter visitor ID: ";
	cin >> id_input;

	cin.ignore();
	cout << "Enter city: ";
	getline(cin, city_input);

	cout << "Enter pass type: ";
	getline(cin, pass_input);

	cout << "Enter number of rides selected: ";
	cin >> ride_input;

	cout << "Enter number of guests: ";
	cin >> guest_input;

	cout << "Enter total spending: $";
	cin >> spending_input;

	cin.ignore();
	cout << "Enter locker required (Yes/No): ";
	getline(cin, locker_input);

	cout << endl;

	visitor_1.setCity(city_input);
	visitor_1.setID(id_input);
	visitor_1.setDetails(name_input, pass_input, ride_input, guest_input, spending_input, locker_input);

	visitor_1.displayDetails();
	
	return 0;
}
