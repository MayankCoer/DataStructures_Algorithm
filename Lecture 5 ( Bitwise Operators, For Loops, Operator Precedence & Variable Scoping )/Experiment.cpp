#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 6;

    /*And Operator*/
    cout << "And Operator of A & B is : " << (a & b) << endl;
    /*OR Operator*/
    cout << "OR Operator of A | B is : " << (a | b) << endl;
    /*NOT Operator*/
    cout << "Not Operator of B is : " << (~b) << endl;
    /*XOR Operator*/
    cout << "XOR Operator of A ^ B is : " << (a ^ b) << endl;

    /*Left Shift*/
    cout << "Left Shift Operator is : " << ( 5<<1 ) << endl;
    /*Right Shift*/
    cout << "Right Shift Operator is : " << ( 5>>2 ) << endl;

    /*Post Increment*/
    int i = 9;
    int c = i++;
    cout <<" value of c is : " << c << endl;
    cout << "value of i is : " << i << endl;  

      /*Pre Increment*/
    int j = 9;
    int d = ++j;
    cout <<" value of d is : " << d << endl;
    cout << "value of j is : " << j << endl;  

      /*Post Decrement*/
    int k = 9;
    int e = k--;
    cout <<" value of e is : " << e << endl;
    cout << "value of k is : " << k << endl;  

      /*Pre Decrement*/
    int l = 9;
    int f = --l;
    cout <<" value of f is : " << f << endl;
    cout << "value of l is : " << l << endl;  

    

}
