#include <iostream>
using namespace std;

void printArray(int arr[] , int size){
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << endl;
    }
    cout << "All Done" << endl;
}
int main(){
    int arr1[10]={7,9};
    printArray(arr1 , 10);

    int arr2[6]={21,2};
    printArray(arr2 , 16);
}