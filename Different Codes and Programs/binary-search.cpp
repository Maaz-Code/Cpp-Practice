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

    int key;
    cout<<"Enter the number you want to search: ";
    cin>>key;

    int s = 0;
    int e = n;

    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            cout<<"Position is: "<<mid<<endl;
            break;
        }
        else if(arr[mid]>key){
            e=mid;
        }
        else if(arr[mid]<key){
            s=mid;
        }
    }
}