#include<iostream>
using namespace std;

// //using pointers to pass by reference
// void changeA(int *ptr){
//     *ptr = 29;
//     cout << *ptr << "\n";
// }

// int main(){
//     int a = 10;
//     changeA(&a); // passing address of a
//     cout<< a << "\n";
//     return 0;
// }






// pass by reference using reference variable
void changeA(int &param){
    param = 20;
    cout << param <<"\n";
}
int main(){
    int a =10;
    changeA(a);
    cout << a <<endl;
    return 0;
}