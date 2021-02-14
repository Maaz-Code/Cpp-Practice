#include <iostream>
using namespace std;

int main() {
    cout<< "Enter three numbers: ";
    int a,b,c;
    cin >> a >> b >> c;
    if (a>b && a>c) 
        {
            cout <<"Largest is: "<<a;
        }
    else if (a<b && b>c)
        {
            cout <<"Largest is: "<<b;
        }
    else
        {
            cout <<"Largest is: "<<c;
        }
    return 0;
}