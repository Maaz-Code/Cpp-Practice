#include<iostream>
using namespace std;

int main() {
    int n,m,reverse=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>0) {
        m = n % 10;
        reverse = reverse * 10;
        reverse = reverse + m;
        n = n / 10;
    }
    cout<<"Reverse is: "<<reverse;
    return 0;
}

//the reverse part could also be the merge of both the statements: "reverse = reverse*10 + m;"