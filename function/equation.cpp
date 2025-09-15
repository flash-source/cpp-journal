#include <iostream>
using namespace std;

int abSquare(int a, int b) {
    return a*a+b*b+2*a*b;
}

int main() {
    cout << abSquare(5, 2);
    return 0;
}