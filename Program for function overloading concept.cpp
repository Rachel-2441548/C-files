#include <iostream>
using namespace std;

class Marks {
public:
	int totalmarks(int marks_1) {
        return (marks_1 );
    }
    int totalmarks(int marks_1, int marks_2) {
        return (marks_1 + marks_2);
    }

    int totalmarks(int marks_1, int marks_2, int marks_3) {
        return (marks_1 + marks_2 + marks_3);
    }
};

int main() {
    Marks myobj;
    int marks_1 = 25;
    int marks_2 = 70;
    int marks_3 = 50;
    
    cout << "Total marks (1 subjects): " << myobj.totalmarks(marks_1) << endl;
    cout << "Total marks (2 subjects): " << myobj.totalmarks(marks_1, marks_2) << endl;
    cout << "Total marks (3 subjects): " << myobj.totalmarks(marks_1, marks_2, marks_3) << endl;

    return 0;
}
