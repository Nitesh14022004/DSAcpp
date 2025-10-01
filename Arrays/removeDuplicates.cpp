#include<iostream>
#include<vector>
using namespace std;

int duplicates(vector<int>& arr, int n){
    int i=0;
    for(int j=1; j<n; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    vector<int> arr ={1,1,1,1,2,3,4,5,5,5};
    int n = arr.size();
    int duplicate = duplicates(arr, n);
    for(int i=0; i<duplicate; i++){
        cout << arr[i] << " ";  
}
return 0;
}