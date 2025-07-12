#include<iostream>
using namespace std;

int LinearSearch(int arr[],int n,int ele){
    for(int i=0; i<=n ;i++){
        if(ele == arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(int);
        cout << "the element is:"<< LinearSearch( arr, n, 1)<< endl;

            cout << "the element is:"<< LinearSearch( arr, n, 2)<< endl;

                cout << "the element is:"<< LinearSearch( arr, n, 3)<< endl;

                    cout << "the element is:"<< LinearSearch( arr, n, 4)<< endl;

    cout << "the element is:"<< LinearSearch( arr, n, 6)<< endl;
        cout << "the element is:"<< LinearSearch( arr, n, 7)<< endl;

            cout << "the element is:"<< LinearSearch( arr, n, 8)<< endl;

    return 0;
}