#include <iostream>
using namespace std;
int main(){
    int num = 3;
    int ch = 'A';
    switch (num)
    {
    case 1 :
        cout << "Case 1 matched";
        break;
    case 2 :
        cout << "Case 2 matched";
        break;
    case 3 :
        switch (ch)
        {
        case 'A':
            cout << "Character is Matched"<< endl;
            break;
        
        default:
            break;
        }
        cout << "Case 3 matched";
        break;    
    default:
        cout << "no matched" ;
        break;
    }
    cout << endl; 
}