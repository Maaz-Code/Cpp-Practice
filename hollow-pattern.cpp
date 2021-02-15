#include <iostream>
using namespace std;

//this is for a rectangular hollow box
int main() {

    int row,column;
    cout<<"Enter the number of rows: "<<endl;
    cin>>row;
    cout<<"Enter the number of columns: "<<endl;
    cin>>column;

    for(int i=1;i<=row;i++) {
        for(int j=1;j<=column;j++) {
            if ( i == 1 || j == 1 || i == row || j == column ) {
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}