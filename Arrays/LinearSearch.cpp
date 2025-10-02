#include<iostream>
#include<vector>
using namespace std;

int LinearSearch(vector<int>& arr, int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> arr ={1,2,34,5,6,7,8,9};
    int n = arr.size();
    LinearSearch(arr,n,5);
    cout<<LinearSearch(arr,n,5);
    return 0;
}