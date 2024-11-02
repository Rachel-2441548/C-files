
#include <iostream>
#include <string>
using namespace std;

class Donor {
protected:
    string name;
    int id;
    double amount;
    string place;

public:
    Donor(string n, int i, double a, string p)
        : name(n), id(i), amount(a), place(p) {}

    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }

    virtual ~Donor() {}
};

class CashDonor : public Donor {
public:
    CashDonor(string n, int i, double a, string p)
        : Donor(n, i, a, p) {}

    void display() override {
        cout << "Cash Donation:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Amount: $" << amount << endl;
        cout << "Place: " << place << endl;
    }
};

int main() {
    string name, place;
    int id;
    double amount;

    cout << "Enter donor name: ";
    cin >> name;
    cout << "Enter donor ID: ";
    cin >> id;
    cout << "Enter donation amount: ";
    cin >> amount;
    cout << "Enter donation place: ";
    cin >> place;

    Donor* donor = new CashDonor(name, id, amount, place);

    donor->display();

    delete donor;

    return 0;
}
