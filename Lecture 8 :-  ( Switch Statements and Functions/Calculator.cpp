#include<iostream>
using namespace std;
int main(){
    int a , b ;
    char op;
    cout << "Enter a value of a : " << endl;
    cin >> a ;
    cout << "Enter a value of b : " << endl;
    cin >> b;
    cout << "Enter a Operation : " << endl;
    cin >> op; 
    switch (op){
            case '*' :
            cout << "Muultiplication of a & b is : " << a*b << endl;
            break;
            case '+' :
            cout << "Addition of a & b is : " << a+b << endl;
            break;case '%' :
            cout << "Modulo of a & b is : " << a%b << endl;
            break;case '/' :
            cout << "Divide of a & b is : " << a/b << endl;
            break;
            case '-' :
            cout << "Subtraction of a & b is : " << a-b << endl;
            break;
            default:
            cout << "No a valid operator";
    }      
}