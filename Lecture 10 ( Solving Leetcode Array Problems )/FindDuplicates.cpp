#include <iostream>
using namespace std;

int findDuplicate(int arrs[] , int size){
    int ans = 0 ;

    /*Brute force solution*/
    /*
    for(int i = 0 ; i < size ; i++){
        for(int j = i+1 ; j < size ; j++ ){
            if(arrs[i] == arrs[j]){
                ans = arrs[i];
                break;
            }
            else{
                continue;
            }
        }
        
    }
    return ans;
        */

    /*Optimal solution*/
    /*
    int ans = 0 ;
    for(int i = 0 ; i < arr.size() ; i++){
        ans = ans ^ arr[i];
        
    }
    
    for(int i = 0 ; i < arr.size() ; i++){
        ans = ans ^ i ;
    }
    return ans;
    */   
}
int main(){
    int arr[5] = {44 , 2 , 44 , 1 , 5};

    int result = findDuplicate(arr , 5);
    cout << "Duplicate no is : " << result << endl;
}