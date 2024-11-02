#include <iostream>
#include <string>
using namespace std;

class Donor {
public:
    string name;
    double amount;
    int id;
    string place;

    Donor(string n, double a, int i, string p)
        : name(n), amount(a), id(i), place(p) {}

    void showDonor() {
        cout << "Donor Name: " << name << endl;
        cout << "Donor Amount: $" << amount << endl;
        cout << "Donor ID: " << id << endl;
        cout << "Donation Place: " << place << endl;
    }
};

class Volunteer {
public:
    string name;

    Volunteer(string n) : name(n) {}

    void showVolunteer() {
        cout << "Volunteer Name: " << name << endl;
    }
};

int main() {
    string ngoName, donorName, volName, donationPlace;
    double donorAmount;
    int donorID;

    cout << "Enter NGO Name: ";
    cin >> ngoName;

    cout << "Enter Donor Name: ";
    cin >> donorName;
    cout << "Enter Donor Amount: ";
    cin >> donorAmount;
    cout << "Enter Donor ID: ";
    cin >> donorID;
    cout << "Enter Donation Place: ";
    cin >> donationPlace;

    cout << "Enter Volunteer Name: ";
    cin >> volName;

    Donor* donor = new Donor(donorName, donorAmount, donorID, donationPlace);
    Volunteer* volunteer = new Volunteer(volName);

    cout << "\nDonor Details:\n";
    donor->showDonor();
    cout << "\nVolunteer Details:\n";
    volunteer->showVolunteer();

    delete donor; 
    delete volunteer; 

    return 0;
}
