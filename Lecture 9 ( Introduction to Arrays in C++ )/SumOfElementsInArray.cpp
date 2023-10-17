#include<iostream>
using namespace std;

int sumarray(int arr[] , int n){

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum ;
    
}
int main(){
    int size ;
    cout << "Enter a szie of an array " << endl;
    cin >> size ;
    int arrs[10000];
    for (int i = 0; i < size; i++)
    {
        cin >> arrs[i] ;
    }
    int finalresult = sumarray(arrs,size);
    cout << "Sum of an array is : " << finalresult << endl;
    

}