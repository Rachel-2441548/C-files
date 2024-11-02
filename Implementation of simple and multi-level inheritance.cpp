#include <iostream>
#include <string>
using namespace std;

class NGO {
protected:
    string n;

public:
    NGO(string name) : n(name) {}

    void showNGO() {
        cout << "NGO Name: " << n << endl;
    }
};

class Donor : public NGO {
protected:
    string dn;
    double da;
    int id;
    string dp;

public:
    Donor(string ngoName, string name, double amount, int donorID, string place)
        : NGO(ngoName), dn(name), da(amount), id(donorID), dp(place) {}

    void showDonor() {
        showNGO();
        cout << "Donor Name: " << dn << endl;
        cout << "Donor Amount: $" << da << endl;
        cout << "Donor ID: " << id << endl;
        cout << "Donation Place: " << dp << endl;
    }
};

class Volunteer : public Donor {
protected:
    string vn;

public:
    Volunteer(string ngoName, string donorName, double amount, int donorID, string place, string name)
        : Donor(ngoName, donorName, amount, donorID, place), vn(name) {}

    void showVolunteer() {
        showDonor();
        cout << "Volunteer Name: " << vn << endl;
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

    Volunteer V(ngoName, donorName, donorAmount, donorID, donationPlace, volName);

    cout << "\nVolunteer Details:\n";
    V.showVolunteer();

    return 0;
}
