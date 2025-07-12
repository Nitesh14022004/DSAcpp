#include<iostream>
using namespace std;

int sum(int a , int b){
    int sum = a + b;
    return sum;
}
double sum(double a, double b){
    double sum = a + b;
    return sum;
}

int sum (int e, int f, int g){
    cout << (e+f+g)<<endl;
    return e+f+g;
}

int main(){
    cout<< "The sum is :" << sum(4,5)<<endl;
    cout<< "the sum is :" << sum(4.5,5.5)<<endl;
    sum(2,3,4);

    return 0;
}