#include<iostream>
using namespace std;

class NGO
{
	int age;
	string volunteerId, name;
	public:
	static int nextNo;
	static string nextId();
	NGO()
	{
		volunteerId = nextId();
		age = 18;
	}
	NGO(NGO& obj)
	{
		volunteerId = nextId();
		age = obj.age;
		name = obj.name;
	}
	void setName(string name)
	{
		this -> name = name;
	}
	void display()
	{
		cout << "Volunteer ID: " << volunteerId << "\nName: " << name << "\nAge: " << age << "\n";
	}
};

int NGO::nextNo = 1;
string NGO::nextId()
{
	return "VOL" + to_string(nextNo++);
}

int main()
{
	NGO Volunteer1;
	Volunteer1.setName("Jovita");
	NGO Volunteer2(Volunteer1);
	cout << "Volunteer 1:\n";
	Volunteer1.display();
	cout << "\nVolunteer 2:\n";
	Volunteer2.display();
}
