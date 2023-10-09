#include <iostream>
using namespace std;
int main(){

    /* Sum 1 to N */
    // int n;
    // cin >> n ;
    // int i = 1;
    // int sum = 0;
    // while (i <= n){
    //     sum = sum + i ;
    //     i = i + 1 ;
    // }   
    // cout << "Sum of 1 to N no's is " << sum << endl;

    /* Sum of all even no's*/
    int n ;
    cin >> n ;
    int i = 2;
    int sum = 0;
    while (i<=n){
        if(i%2==0){

            sum = sum + i ;
            i = i + 2 ;

        }
        else{
            
            i = i + 2;

        }
    }
    cout << "Sum of all even no's 1 to N is " << sum  << endl;
}