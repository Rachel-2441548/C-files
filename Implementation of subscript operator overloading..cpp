
#include <iostream>
using namespace std;

class NGO {
private:
    string projects[4];  // 4 NGO projects

public:
    
    NGO() {
        projects[0] = "Healthcare Program";
        projects[1] = "Education Initiative";
        projects[2] = "Clean Water Project";
        projects[3] = "Women Empowerment";
    }


    // subscript operator [ ]
    string operator[ ](int index) {
        if (index < 0 || index >= 4) {      // GREATER THAN 0 AND LESS THAN 4
            return "Invalid index!";          // THEN RETURNS INVALID INDEX FOR 4
        }
        return projects[index];
    }
};

int main() {
    NGO myNGO;


    cout << "Project at index 0: " << myNGO[0] << endl;  // Valid access
    cout << "Project at index 1: " << myNGO[1] << endl;  // Valid access
    cout << "Project at index 2: " << myNGO[2] << endl;  // Valid access
    cout << "Project at index 3: " << myNGO[3] << endl;  // Valid access

    // Attempt to access an invalid index
    cout << "Project at index 4: " << myNGO[4] << endl;  // Invalid access BECAUSE index 4 is  not there in the project

    return 0;
}
