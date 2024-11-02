#include <iostream>
#include <string>

using namespace std;

class NGO {
public:
  string name;
  int fund;

  NGO(string n, int f) : name(n),fund(f) {}

  // Unary operators

// INCREMENT operator(++)
  NGO& operator++() {
    fund++;
    return *this;
  }

// DECREMENT operator(++)
  NGO& operator--() {
    fund--;
    return *this;
  }

// logical NOT operator (!)
  bool operator!() const {
    return fund == 0;
  }

  // Binary operators

  // ADDITION(+)
  NGO operator+(const NGO& other) const {
    return NGO(name + " and " + other.name, fund+ other.fund);
  }

  // SUBTRACTION(-)
  NGO operator-(const NGO& other) const {
    return NGO(name + " and" + other.name, fund- other.fund);
  }

  // MULTIPLY(*)
  NGO operator*(int multiplier) const {
    return NGO(name, fund* multiplier);
  }

  void print() const {
    cout << name << ": " << fund << endl;
  }
};

int main() {
  NGO ngo1("CRY NGO", 800);
  NGO ngo2("CARE NGO", 200);

  // Use unary operators
  ++ngo1;
  --ngo2;
  bool isInactive = !ngo2;

  // Use binary operators
  NGO combined = ngo1 + ngo2;
  NGO difference = ngo1 - ngo2;
  NGO multiplied = ngo1 * 2;

  // Print results
  ngo1.print();
  ngo2.print();
  cout << "Is NGO2 inactive? " << (isInactive ? "Yes" : "No") << endl;
  combined.print();
  difference.print();
  multiplied.print();

  return 0;
}
