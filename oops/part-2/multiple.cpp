#include <iostream>
using namespace std;

class Teacher {
public:
    int salary;
    string subject;
};

class Student {
public:
    int rollno;
    float cgpa;
};

class TA : public Teacher, public Student {
public: 
    string name;
};

int main() {
    TA ta1;
    ta1.name = "Hermione";
    ta1.subject = "oops";
    ta1.rollno = 44;
    ta1.cgpa = 9.1;

    cout << ta1.name << endl;
    cout << ta1.subject << endl;
    cout << ta1.rollno << endl;
    cout << ta1.cgpa << endl;
    return 0;
}