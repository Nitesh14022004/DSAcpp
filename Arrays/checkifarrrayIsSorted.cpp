#include<bits/stdc++.h>
using namespace std;
bool checkArrayIsSorted(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
};

int main(){
    int arr[] = {4,2,3,4,5,6};
    int n = 6;
    bool isSorted = checkArrayIsSorted(arr, n);
    cout << (isSorted ? "True" : "False") << endl;
    // if(isSorted){
    //     cout << "True"<<endl;
    // }else {
    //     cout << "False" <<endl;
    // }
    return 0;

}