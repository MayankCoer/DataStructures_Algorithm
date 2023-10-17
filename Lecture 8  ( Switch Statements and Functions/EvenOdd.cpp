#include<iostream>
using namespace std;
int EvenOdd(){
    int num ;
    cout << "Enter a no : " << endl;
    cin >> num;
    if(num%2==0){
        
        cout << num << " is Even " << endl;
        return num ;
        
    }
    else
    {
        cout << num << " is Odd " << endl;
        return num;
    }
}
int main(){
    int no = EvenOdd();
    cout << " " << endl;
    return 0;
}