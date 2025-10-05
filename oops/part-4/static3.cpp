//static object

#include <iostream>
using namespace std;

class Example {
public:
    Example() {
        cout << "constructor..\n";
    }
    ~Example() {
        cout << "destructor..\n";
    }
};

int main() {
    int a = 0;
    if (a==0) {
        //1.constructor.. 2.destructor.. 3.code ends..
        Example eg1;
    }
    if (a==0) {
        //1.constructor.. 2.code ends.. 3.destructor.. 
        static Example eg2; //stay lifetime till the whole code ends, even after the destructor
    }
    cout << "code ends..\n";
    return 0;
}