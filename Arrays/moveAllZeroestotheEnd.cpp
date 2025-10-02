#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& arr, int n){


}



int main(){
    vector<int> arr = {1,2,3,4,5,6,0};
    int n = arr.size();
    moveZeroes(arr, n);
    for(int i =0; i<n;i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}