//Brute force approach
#include<iostream>

#include<climits>
using namespace std;

void maxSubarray(int *arr, int n){
    int maxSum= INT_MIN;
    for(int start=0; start<n; start++){
        int currSum= 0;
        for(int end=start; end<n; end++){
            currSum += arr[end];
            maxSum = max(maxSum, currSum);
        }
    }
    cout<<"maximum subarray sum = "<<maxSum<<endl;
}
int main(){
    int arr[6]={1,-2,3,-4,5,-6};
    int n = sizeof(arr) /sizeof(int);
    maxSubarray(arr, n);
    return 0;
}