#include<iostream>
using namespace std;

bool searchelement(int arrs[] , int n , int val){
    for (int i = 0; i < n; i++)
    {
        if(arrs[i] == val){
           
            return 1;
        }
        
    }
    return 0;
    
}
int main(){
    int arr[8]={3,9,19,201,12,28,18,2};
    int key;
    cout << "Enter a key " << endl;
    cin >> key ;
    bool check;    
    check = searchelement(arr,8,key);
    if(check){
        cout << "Element Found" << endl;
    }
    else{
        cout << "Element Not Found" << endl;
    }
    cout << "Search Done" << endl;
}