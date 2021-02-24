#include<iostream>
using namespace std;

int main() {
    
    int n,m;
    cout<<"Enter maximum number of elements in the array: ";
    cin >> n>> m;
    int arr[n][m];
    cout<<"Elements of the array are: ";

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }

    int key;
    cout<<"Enter the key: ";
    cin>>key;

    bool flag = false;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(key == arr[i][j]) {
                cout<<"Element found at: ("<<i<<","<<j<<")"<<endl;
                flag = true;
            }
        }
    }
    
    if(flag){
        cout<<"Element found!";
    }
    else{
        cout<<"Element not found!";
    }
}