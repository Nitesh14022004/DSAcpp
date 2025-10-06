#include<bits/stdc++.h>
using namespace std;

string twoSum(int n, vector<int> arr, int target){
    int left =0, right =n-1;
    sort(arr.begin(), arr.end());
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            return "YES";
        }else if(sum < target) left++;
            else right--;
        }
        return "NO";
    }

int main(){
    int n = 7;
    int target = 20;
    vector<int> arr = {1,2,3,4,5,6,7,8};
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>target;
    cout<<twoSum(n, arr, target);
    return 0;
}