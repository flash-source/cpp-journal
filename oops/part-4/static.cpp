//in function
//variables declared as static in a function are created & initialised once for the lifetime of the program.

#include <iostream>
using namespace std;

void counter() { 
    int x = 0; //everytime the function is called, new stack form, deleting the previous and value initialise to 0.
    static int  y = 0; //previous value remain in the stack
    x++, y++;
    cout << "x count: " << x << endl; 
    cout << "y count: " << y << endl; 
}

int main() {
    counter(); // x=1, y=1
    counter(); // x=1, y=2
    counter(); // x=1, y=3
    return 0;
}






