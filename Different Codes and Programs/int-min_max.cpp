#include<iostream>
#include<climits> // for using INT_MIN & INT_MAX
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

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for(int j=0;j<n;j++){ 
        maxNo = max(maxNo,arr[j]);
        minNo = min(minNo,arr[j]);
    }
    cout<<"Maximum number is: "<<maxNo<<endl;
    cout<<"Minimum number is: "<<minNo<<endl;
    return 0;
}