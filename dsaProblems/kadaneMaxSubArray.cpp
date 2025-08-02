#include<iostream>
using namespace std;
#include<climits>

void maxSubArray(int *arr, int n){
    int maxSum= INT_MIN;
    int currSum=0;
    for(int i =0; i<n;i++){
        currSum += arr[i];
        maxSum= max(currSum, maxSum);
        if(currSum < 0){
            currSum =0;
        }
    }
    cout<<" maximum subarray sum =" <<maxSum <<endl;
}

int main(){
    int arr[6]= {1,-2,3,-4,5,-6};
    int n = sizeof(arr) / sizeof(int);
    maxSubArray(arr, n);
    return 0;
    
}