#include<iostream>
#include<vector>
using namespace std;

vector<int>  moveZeroes(vector<int>& a, int n){
    int j = -1;
    for(int i=0; i<n ;i++){
        if(a[i] ==0){
            j=i;
            break;
        }
    }

    if(j==-1) return a;

    for(int i =j+1; i<n ; i++){
        if(a[i] !=0){
            swap(a[i],a[j]);
            j++;
        }
    }
    return a;

}



int main(){
    vector<int> a = {1,0,0,0,0,2,3,4,5,6,0};
    int n = a.size();
    moveZeroes(a, n);
    for(int i =0; i<n;i++){
        cout<< a[i]<<" ";
    }
    return 0;
}