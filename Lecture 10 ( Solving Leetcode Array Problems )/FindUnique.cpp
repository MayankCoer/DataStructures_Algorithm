#include<iostream>
using namespace std;

void findUnique(int arr[], int size)
{
    int ans = 0 ;
    for(int i = 0 ; i < size ; i++){
        ans = ans ^ arr[i] ;
    }
    cout << ans << endl;
    cout << "Searching Done to find unique element" << endl;
}
int main(){
    int arr[5] = {2 , 4 ,7 ,2 ,7};
    findUnique(arr,5);
}