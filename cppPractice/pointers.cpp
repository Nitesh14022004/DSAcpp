#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
    int **pptr = &ptr; //pointer to pointer

    cout<< &ptr << "=" << pptr << "\n";
    cout <<sizeof(ptr)<< endl;
    cout <<sizeof(a)<< endl;
    cout << &a <<endl;
}