#include <iostream>
using namespace std;

int reverse(int n) {
    int res=0;
    while(n>0){
        int lastDig = n%10;
        res = res*10 + lastDig;
        n = n/10;
    }
    return res;
}

bool isPalindrome(int num){
    int revNum = reverse(num);
    return num == revNum;
}


int main() {
    cout<< isPalindrome(121);
    return 0;
}