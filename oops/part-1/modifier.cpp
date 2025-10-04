#include <iostream>
using namespace std;

class Student {
    //Private
    string name;
public:
    float cgpa;

    void getPercentage() {
        cout << (cgpa*10) << "%\n";
    }
};

int main() {
    Student s1;
    //error => since, private
    // s1.name = "Dobby";
    // cout << s1.name << endl;
    s1.cgpa = 9.0;
    cout << s1.cgpa << endl; 
    s1.getPercentage();
    return 0;
}