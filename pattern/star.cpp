#include <iostream>
using namespace std;

int main() {
    //outer loop
    int n = 5;
    for(int i=1; i<=n; i++){
        //inner loop
        for(int j=1; j<=i; j++) {
            //work
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}