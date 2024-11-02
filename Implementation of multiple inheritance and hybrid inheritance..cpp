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

class Donor {
protected:
    string dn;
    double da;
    int id;
    string dp;

public:
    Donor(string name, double amount, int donorID, string place)
        : dn(name), da(amount), id(donorID), dp(place) {}

    void showDonor() {
        cout << "Donor Name: " << dn << endl;
        cout << "Donor Amount: $" << da << endl;
        cout << "Donor ID: " << id << endl;
        cout << "Donation Place: " << dp << endl;
    }
};

class Volunteer {
protected:
    string vn;

public:
    Volunteer(string name) : vn(name) {}

    void showVolunteer() {
        cout << "Volunteer Name: " << vn << endl;
    }
};

class Event : public NGO {
protected:
    string et;

public:
    Event(string ngoName, string type) : NGO(ngoName), et(type) {}

    void showEvent() {
        showNGO();
        cout << "Event Type: " << et << endl;
    }
};

class FEvent : public Event, public Donor, public Volunteer {
private:
    string ft;

public:
    FEvent(string ngoName, string type, string donorName, double amount, int donorID, string place, string volName, string fundType)
        : Event(ngoName, type), Donor(donorName, amount, donorID, place), Volunteer(volName), ft(fundType) {}

    void showDetails() {
        showEvent();
        showDonor();
        showVolunteer();
        cout << "Fundraising Type: " << ft << endl;
    }
};

class ACampaign : public Event {
private:
    string cg;

public:
    ACampaign(string ngoName, string type, string goal)
        : Event(ngoName, type), cg(goal) {}

    void showCampaign() {
        showEvent();
        cout << "Campaign Goal: " << cg << endl;
    }
};

int main() {
    string ngoName, donorName, volName, fundType, campaignGoal, eventType;
    double amount;
    int donorID;

    cout << "Enter NGO Name: ";
    cin >> ngoName;

    cout << "Enter Fundraiser Event Type: ";
    cin >> eventType;

    cout << "Enter Donor Name: ";
    cin >> donorName;
    cout << "Enter Donor Amount: ";
    cin >> amount;
    cout << "Enter Donor ID: ";
    cin >> donorID;
    cout << "Enter Donation Place: ";
    cin >> volName;

    cout << "Enter Volunteer Name: ";
    cin >> volName;

    cout << "Enter Fundraising Type: ";
    cin >> fundType;

    FEvent f(ngoName, eventType, donorName, amount, donorID, volName, volName, fundType);
    
    cout << "Enter Campaign Goal: ";
    cin >> campaignGoal;

    ACampaign a(ngoName, "Awareness", campaignGoal);

    cout << "\nFundraising Event Details:\n";
    f.showDetails();

    cout << "\nAwareness Campaign Details:\n";
    a.showCampaign();

    return 0;
}
