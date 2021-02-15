#include <iostream>
using namespace std;

//making a simple calculator using switch-case statements
int main() {

    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;

    char op;
    cout<<"Enter the operator: ";
    cin>>op;

    switch(op) {

        case '+':
        cout<<"Answer is: "<<x+y<<endl;
        break;

        case '-':
        cout<<"Answer is: "<<x-y<<endl;
        break;

        case '*':
        cout<<"Answer is: "<<x*y<<endl;
        break;

        case '/':
        cout<<"Answer is: "<<x/y<<endl;
        break;

        case '%':
        cout<<"Answer is: "<<x%y<<endl;
        break;

        default:
        cout<<"Invalid!"<<endl;
        break;

    }
    return 0;
}