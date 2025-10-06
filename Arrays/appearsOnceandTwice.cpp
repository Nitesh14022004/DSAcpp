#include<bits/stdc++.h>
using namespace std;
int getSingleElement(vector<int> &arr){
    int xorr= 0;
    for(int i=0; i<arr.size();i++){
        xorr = xorr ^ arr[i];
}return xorr;
}

int main(){
    vector<int> arr = {1,2,3,4,3,2,1};
    int result = getSingleElement(arr);
    cout << "The element which appears once is :"<< result << endl;

    return 0;
}