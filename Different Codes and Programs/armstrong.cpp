#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n,m,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    int original = n;
    while(n>0) {
        m = n % 10;
        sum = sum + pow(m,3);
        n = n / 10;
    }
    if(original == sum) {
        cout<<"It is an Armstrong number.";
    }
    else {
        cout<<"It is not an Armstrong number.";
    }
    return 0;
}