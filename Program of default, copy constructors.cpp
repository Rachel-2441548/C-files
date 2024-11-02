#include <iostream>
using namespace std;

class ngo {
    int Donation_id;
    int Donation_amount;
    string Name;

public:
    static int donation_id_counter; 
    
    ngo() : Donation_id(donation_id_counter++), Donation_amount(0), Name("Unknown") {}

    ngo(const ngo& obj) : Donation_id(donation_id_counter++),Donation_amount(obj.Donation_amount), Name(obj.Name) {}

    void setName(string Name) {
        this->Name = Name;
    }

    friend void display(const ngo& obj);
};

int ngo::donation_id_counter = 101;

void display(const ngo& obj) {
    cout << "Donation_id: " << obj.Donation_id << "\nName: " << obj.Name << "\nDonation_amount: " << obj.Donation_amount << "\n";
}

int main() {
    ngo Donor1;
    Donor1.setName("Fay");

    ngo Donor2(Donor1);

    cout << "Donor1:\n";
    display(Donor1);

    cout << "\nDonor2:\n";
    display(Donor2);

    return 0;
}
