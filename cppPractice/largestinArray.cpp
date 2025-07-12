#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,6,3,47,6};
    int n = sizeof(arr) / sizeof(int);
    int max = arr[0];
    for(int i=0; i<=n ; i++){
        // if(arr[i] > max){
        if(max < arr[i]){
            max = arr[i];
            cout << "the largest max is swapped to:" << arr[i]<<endl;
        }
    }
    cout << "The largest element is : "<< max <<endl;
    return 0;
}