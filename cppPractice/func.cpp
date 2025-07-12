#include<iostream>
using namespace std;

int sum(int a, int b){
    int sum = a + b;
    return sum;
}

int diff(int a, int b){
    int diff = a-b;
    return diff;
}
int main(){
    int s = sum(10,20);
    int y = diff(10, 40);
    cout<< "The total sum is :"<< s <<endl;
    cout << "the differeence is :" << y <<endl;
    return 0;
}