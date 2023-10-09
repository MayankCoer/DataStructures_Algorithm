#include<iostream>
using namespace std;

int power(){

    int a , b;
    cout << "Enter a value of a : " << endl;
    cin >> a ;
    cout << "Enter a value of b : " << endl;
    cin >> b;

    int ans = 1;
    for (int i = 1; i <=b; i++)
    {
        ans = ans * a;
    }
    return ans;
    
}
int main(){
    // int a , b;
    //  cout << "Enter a Value of a : " << endl;
    //  cin >> a;
    //  cout << "Enter a value of b : " << endl;
    //  cin >> b ;

    //  int answer = power(a,b);
    //  cout << "Power of a & b is : " << answer << endl;

    //  int c , d;
    //  cout << "Enter a Value of c : " << endl;
    //  cin >> c;
    //  cout << "Enter a value of d : " << endl;
    //  cin >> d ;

    int answer = power();
     cout << "Power of two number is : " << answer << endl;
     return 0;
}