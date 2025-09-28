#include <bits/stdc++.h>
using namespace std;

int secondSmallestElement(vector<int> &a, int n){
    int smallest = a[0];
    int ssmallest = INT_MIN;
    for(int i=0; i<n; i++){
        if(a[i]<smallest){
            ssmallest = smallest;
            smallest = a[i];
        } else if(a[i] < smallest && a[i] > ssmallest){
            ssmallest = a[i];
        }
    } return ssmallest;
};

int main(){
    vector <int> arr ={4,8,2,3,5,1};
    int n = arr.size();
    int secondsmallest = secondSmallestElement(arr, n);
    cout<<"The second smallest element in the array is: "<<secondsmallest<<endl;
}