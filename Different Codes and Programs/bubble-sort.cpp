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

    int counter = 1;
    while(counter < n-1){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
    
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// Time Complexity for this would be O(n*n) as there n*n time the elements are sorted.
// Best case is 0(n) when we will add a condition of no swapping as all elements are already sorted. Hence the loop will break in that condition. 