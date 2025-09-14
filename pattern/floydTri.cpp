#include <iostream>
using namespace std;

int main() {
    //outer loop
    int n = 5;
    int num = 1;
    for(int i=1; i<=n; i++){
        //inner loop
        for(int j=1; j<=i; j++) {
            //work
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}