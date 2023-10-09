#include <iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
     int prd = 1;
      int sum = 0;
     while(n!=0){
        int rem = n % 10 ;
        prd = prd*rem;
        sum = sum + rem;
        n = n /10;
        
     }   
     int result = prd-sum;
    cout << result;
}