#include <iostream>
using namespace std;
int main(){
    int a = 9 ;
    cout << a << endl;

    if(true){
        int a = 10 ;
        int b = 10 ;
        cout << a << endl;
    }
     /*Give error because we are accessing it outside the scope*/
    // cout << b << endl;
}