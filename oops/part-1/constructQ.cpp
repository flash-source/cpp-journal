#include <iostream>
using namespace std;

class User {
    int id;
    string password;
public:
    string username;
    //initalise id
    User(int id) {
        //object id = parameter
        this->id = id;
    }
    //password setter
    void setPassword(string password) {
        this->password = password;
    }
    //password getter
    string getPassword() {
        return password;
    }
    //id getter
    int getId() {
        return id;
    }

};

int main() {
    User u1(1);
    u1.username = "dobby";
    u1.setPassword("helloworld");
    cout << u1.getPassword() << endl; 
    cout << u1.getId() << endl; 
    return 0;
}