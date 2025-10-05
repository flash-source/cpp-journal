//friend class & friend function
//can access private and protected members of other classes in which it is declared as a friend.

#include <iostream>
using namespace std;

class A {
    string secret = "secret data..";
    friend class B;
    friend void revealSecret(A &obj);
};

//becomes a friend of class A, and only it can access A, vice-versa is not possible
class B {
public:
    void showSecret(A &obj) {
        cout << obj.secret << endl;
    }
};

void revealSecret(A &obj) {
    cout << obj.secret << endl;
}

int main() {
    A a1;
    B b1;
    b1.showSecret(a1); //friend class
    revealSecret(a1); //friend function
    return 0;
}