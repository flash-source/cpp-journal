#include <iostream>
using namespace std;

class Student {
    //Properties
    string name;
    float cgpa;

    //Methods
    void getPercentage() {
        cout << (cgpa*10) << "%\n";
    }
};

int main() {
    Student s1;
    cout << sizeof(s1) << endl; //32 bytes
    return 0;
}