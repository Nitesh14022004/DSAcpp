#include<bits/stdc++.h>
using namespace std;

// int missingNumber(vector<int>& nums) {
//     int n = nums.size();
//     int total = n * (n + 1) / 2;
//     int sum = 0;
//     for (int num : nums) {
//         sum += num;
//     }
//     return total - sum;
// }



int missingNumber(vector<int>& a, int N){
    int xor1 = 0;

    for(int i=0; i<N; i++){
        xor1 = xor1 ^ a[i];     // XOR array element
        xor1 = xor1 ^ (i+1);    // XOR number from 1 to N
    }

    return xor1; // after loop, result is the missing number
}


int main(){
    // vector<int> nums = {3, 0, 1};
    // cout << "Missing number is: " << missingNumber(nums) << endl;
    

    vector<int> a = {3,0,1,4,5,6,7};
    int N = a.size();
    cout << "Missing number is: " << missingNumber(a, N) << endl;
    return 0;


}