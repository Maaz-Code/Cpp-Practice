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

    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i - 1;
        while(arr[j]>key && j>=0 ){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// Time Complexity for this would be O(n*n)