#include<iostream>
using namespace std;

void swaparray(int arrs[] , int length){

   for (int i = 0; i < length; i+=2)
   {
    if(i+1<length){
        swap(arrs[i],arrs[i+1]);
    }
   }
   
}

void printarray(int arr[] , int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
    
}
int main(){
    
    int arr[5] = {20,18,6,13,1};
    
    swaparray(arr,5);
    printarray(arr,5);
    
}