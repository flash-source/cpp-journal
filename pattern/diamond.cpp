#include <iostream>
using namespace std;

int main() {
    //outer loop
    //pyramid
    int n = 5;
    for(int i=1; i<=n; i++){
        //inner loop
        for(int j=1; j<=n-i; j++) {
            //work
            cout << " " ;
        }
        for(int j=1; j<=(2*i-1); j++){
            cout << "*";
        }
        cout << endl;
    }
    // inverted pyramid
    for(int i=n; i>=1; i--){
        //inner loop
        for(int j=1; j<=n-i; j++) {
            //work
            cout << " " ;
        }
        for(int j=1; j<=(2*i-1); j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}