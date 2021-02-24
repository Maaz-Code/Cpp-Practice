#include <iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter maximum number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout<<"Elements of the array are: ";
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"All the subarrays possible are: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<endl;
        }
    }
}

// Time Complexity for this would be O(n^3) which is not good.