#include <iostream>
using namespace std;

class Student {
    string name;
    float cgpa;

public:
    void getPercentage() {
        cout << (cgpa*10) << "%\n";
    }
//to get some info from the private data
    //setters
    void setName(string nameVal) {
        name = nameVal;
    }
    void setCgpa(float CgpaVal) {
        cgpa = CgpaVal; 
    }
    
    //getters
    string getName() {
        return name;
    }
    float getCgpa() {
        return cgpa;
    }
};

int main() {
    Student s1;
    s1.setName("Dobby");
    s1.setCgpa(9.0);

    cout << s1.getName() << endl;
    cout << s1.getCgpa() << endl;
    return 0;
}