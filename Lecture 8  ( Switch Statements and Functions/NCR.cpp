#include<iostream>
using namespace std;
int nCr(){
    int n , r ;
    int num = 1;
    int denom = 1 ;
    cout << "Enter a value on n : " << endl;
    cin >> n;
    int numerator ;
    cout << "Enter a value of r : " << endl;
    cin >> r;
    int denominator ;
    for(int i = 1 ; i<n  ;i++){
        numerator = (n-i);
        num = num * numerator;
        
        denominator = (r-i) * (n-r)*i;
        denom = denom * denominator;
    }
    cout << "Value of num is : " << num << endl;
    cout << "Value of denom is : " << denom << endl;

    return num/denom;
    
}
int main(){
    int val = nCr();
    cout << "nCr of n & r is : " << val << endl ;
    return 0;
}