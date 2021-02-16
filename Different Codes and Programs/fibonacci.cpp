#include <iostream>
using namespace std;

void fibonacci(int n){
    int x=0,y=1,next;
    for(int i=0;i<=n;i++){
        cout<<x<<" ";
        next = x + y;
        x = y;
        y = next;  
    }
    return;
}

int main(){
    int n;
    cout<<"Length of Fibonacci series: ";
    cin>>n;

    fibonacci(n);
    return 0;
}