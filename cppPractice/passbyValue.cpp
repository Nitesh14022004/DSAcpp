#include<iostream>
using namespace std;

int changeA(int a){
    a = 10;
    cout<< a << endl;
    return a;
}
int main(){
    int a = 100;
    changeA(a);
    cout<< a << endl;
    return 0;
}