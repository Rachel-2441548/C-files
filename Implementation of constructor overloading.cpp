
#include <iostream>
using namespace std;
 
class User {
	string donor, Place, email;
	int amt;
 
public:
	// Constructor with one parameter
	User(string u) {
    	donor = u;
    	email = "Not provided";
    	Place = "Not provided";
    	amt = 0;
	}
 
	// Constructor with three parameters
	User(string u, string e, string ev) {
    	donor = u;
    	email = e;
    	Place = ev;
    	amt = 0;
	}
 
	// Constructor with four parameters
	User(string u, string e, string ev, int a) {
    	donor = u;
    	email = e;
    	Place = ev;
    	amt = a;
	}
 
	// Method to display user details
	void display() {
    	cout << "Donor: " << donor;
    	cout << "\nEmail: " << email;
    	cout << "\nPlace: " << Place;
    	cout << "\nAmount: " << amt << "\n"; // Corrected 'amount' to 'amt'
	}
};
 
int main() {
	User user1("Rachel");
	User user2("Fay", "fay2006@gmail.com", "Chennai");
	User user3("Praveena", "praveena2024@hotmail.com", "Mumbai", 25000);
 
	cout << "User1 Profile:\n";
	user1.display();
 
	cout << "\nUser2 Profile:\n";
	user2.display();
 
	cout << "\nUser3 Profile:\n";
	user3.display();
 
	return 0;
}
