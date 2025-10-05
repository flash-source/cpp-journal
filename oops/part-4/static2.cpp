//in class
//static variable in class are created & initialised once
//they are shared by all the objects of the class.

#include <iostream>
using namespace std;

class Example {
public:
    int x = 0; //each object have their own different variable
    // static const int y = 0;
    static int y; //same variable is shared with every object formed
};

int Example::y = 0;

int main() {
    Example e1;
    Example e2;
    Example e3;

    cout << e1.x++ << endl; //0
    cout << e2.x++ << endl; //0
    cout << e3.x++ << endl; //0

    cout << e1.y++ << endl; //0
    cout << e2.y++ << endl; //1
    cout << e3.y++ << endl; //2
    return 0;
}