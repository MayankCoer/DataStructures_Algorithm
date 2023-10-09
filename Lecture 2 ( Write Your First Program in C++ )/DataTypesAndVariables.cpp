#include <iostream>
using namespace std;
int main(){

    int a = 902;
    cout << a << endl;

    char b = 'c';
    cout << b << endl;

    bool bl = false;
    cout << bl << endl;

    float f = 1.4;
    cout << f << endl;

    double d = 9.22;
    cout << d << endl;
    double dsize = sizeof(d);
    cout << "size of d is " << dsize << endl;

    int size = sizeof(a);
    cout << "size of a is " << size << endl;
}