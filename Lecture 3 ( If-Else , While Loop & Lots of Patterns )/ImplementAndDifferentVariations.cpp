#include <iostream>
using namespace std;
int main(){
    int a ;
    cin >> a ;
    if( a > 0 ){
        cout << "A is Positive " << endl;
    }
    else{
        cout << "A is Negative " << endl;
    }

    int b,c;
    cin >> b ;
    cin >> c;
    if(b>c){
        cout << "B is greater " << endl;
    }
    else{
        cout << "C is greater" << endl;
    }

    /*To Read Space during Input*/
    int a;
    a = cin.get();
    cout << "value of a is " << a << endl;

    int a;
    cout << "Enter a value of a " << endl;
    cin >> a;
    if(a>0){
        cout << "no is +ve" << endl;
    }
    else{
        if(a<0){
            cout << "no is -ve" << endl;
        }
        else{
            cout << "no is zero" << endl;
        }
    }

int a;
    cout << "Enter a value of a " << endl;
    cin >> a;
    if(a>0){
        cout << "no is +ve" << endl;
    }
    else if(a<0){
        cout << "no is -ve" << endl;
    }
    else{
        cout << "no is zero" << endl;
    }     

}