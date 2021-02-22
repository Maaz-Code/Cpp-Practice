#include<iostream>
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

    for(int j=0;j<n;j++) {
        if(key == arr[j]){
            cout<<"Position is: "<<j<<endl;
            break;
        }
        else if (j == n-1) {
            cout<<"Element not found!"<<endl;
        }
    }
    return 0;
}

//we can also use function method to do this.
//Time Complexity for this would be O(n) because we are traversing through all n elements of the array one time.