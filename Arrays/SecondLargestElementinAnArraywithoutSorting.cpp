#include <bits/stdc++.h>
using namespace std;

int secondLargestElement(vector<int> &arr, int n){
    int largest = arr[0];
    int slargest = -1;
    for(int i =0; i<n; i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] <largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    return slargest;
};


int main(){
  vector<int> arr = {2,4,1,7,8,7,3};
  int n = arr.size();
  int secondlargest = secondLargestElement(arr, n);
  cout<<"The second largest element in the array is: "<<secondlargest<<endl;

    return 0;
}
