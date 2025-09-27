#include<iostream>
#include<vector>
using namespace std;

int largestElement(vector<int> &arr, int n){
    int largest = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    int n = 5;
    vector<int> arr = {2, 4, 1, 3, 5};
    int largest = largestElement(arr, n);
    
    cout<<"The largest element in the array is: "<<largest<<endl;
    return 0;
}