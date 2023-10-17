#include<iostream>
using namespace std;
void checkprime(){
    int n ;
    cin >> n;
    for(int i = 2 ; i < n ; i++){
        if(n%i==0){
            cout << "No is not Prime " << endl;
            
        }
        else{
            cout << " No is Prime " << endl;
           
        }
        break;
    }
}
int main(){
    checkprime();
}