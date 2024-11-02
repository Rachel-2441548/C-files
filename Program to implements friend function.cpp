#include<iostream>
using namespace std;

string&retVal(string&x)
{
	return x;
}

void disp(string X, string x, string Y, string y)
{
	cout << X << " = " << x;
	cout << "\n";
	cout << Y << " = " << y;
}

int main()
{
	string p = "The election is decided.";
	string&q = retVal(p);
	disp("p", p, "q", q);
	p = "The votes have been counted.";
	cout << "\n\nAfter only changing p:\n";
	disp("p", p, "q", q);
}
