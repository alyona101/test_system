#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Tested {
public:
    int testResults;
    friend class PersonalData;

    void viewTest() {
        for (const auto& question : test) {
            cout << question << endl;
        }
    }

    void registerTest() {
    }
    void workTest() {
    }
    void viewTestStats() {
        cout << "Test results statistics: " << testResults << endl;
    }
};

struct PersonalData {
    string name;
    string address;
    string phone;
};

int main() {
    Tested testInstance;

    PersonalData person1;
    person1.name = "";
    person1.address = "";
    person1.phone = "";

    testInstance.viewTest();
    testInstance.registerTest();
    testInstance.workTest();
    testInstance.viewTestStats();

    return 0;
}