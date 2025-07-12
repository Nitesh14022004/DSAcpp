#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n == 1){
        return false;
    }
    for(int i = 2; i<=n-1; i++){  //i*i<=n this can be used as well
        if(n % 2 == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int s = isPrime(6);
    cout<<" THe number is :" << s <<endl;
    cout<<"the number is "<< isPrime(44)<< endl;
    return 0;
}