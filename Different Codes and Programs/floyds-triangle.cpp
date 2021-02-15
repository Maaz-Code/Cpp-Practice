#include <iostream>
using namespace std;

int main() {
    int n,count=1;
    cout<<"Enter the number: ";
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}