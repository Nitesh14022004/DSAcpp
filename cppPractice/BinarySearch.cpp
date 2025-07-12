#include<iostream>
using namespace std;

int Binarysearch(int *arr, int n, int key){
    int low = 0, high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
    if(arr[mid] == key){
        return mid;
    }else if(arr[mid] < key){
        low = mid + 1;
    }else {
        high = mid -1;
    }
}
return -1;
}

int main(){
    int arr[]= {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/ sizeof(int);
    cout << Binarysearch(arr, n, 6) <<endl;
    return 0;
}