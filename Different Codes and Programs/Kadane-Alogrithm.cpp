#include <iostream>
#include <climits>
using namespace std;

//This algorithm is used to reduce the time complexity of the problem where we have to find the sum of all elements of the subarray having the largest sum.
//The time complexity gets reduced from O(n^3) to O(n) as 3 for loops reduces to one.


//This is for O(n):
int main() {

    int n;
    cout<<"Enter maximum number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout<<"Elements of the array are: ";
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int i=0;i<n;i++){
        currentSum += arr[i]; // add the subsequent numbers
        if(currentSum<0){ //if the sum becomes -ve then we discard the previous elements and make currentSum = 0
            currentSum = 0;
        }
        maxSum = max(maxSum,currentSum); //take out the maximum one between them
    }
    cout<<"Maximum sum of the elements from a subarray among all other subarrays having the largest sum: "<<maxSum;
}


//for O(n^3):
//after getting all elements for array
//int maxSum=0
//for(int i=0;i<n;i++){
//     for(int j=i;j<n;j++){
//         int sum=0;
//         for(int k=i;k<=j;k++){
//             sum = sum + arr[k];
//         }
//         maxSum= max(maxSum,sum);
//     }
// }