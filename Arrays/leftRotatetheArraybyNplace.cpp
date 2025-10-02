#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void LeftrotateByNplace(vector<int>& arr, int n, int d){
    reverse(arr.begin(), arr.begin()+d);
    reverse(arr.begin()+d , arr.end());
    reverse(arr.begin(), arr.end());
    return;
}

int main(){
vector<int> arr = {1,2,3,4,5,6,7};
int n = arr.size();
int d;
cin >> d;
LeftrotateByNplace(arr,n, d);
for(int i=0; i<n; i++){
    cout<<arr[i]<<"";
}
return 0;
}
