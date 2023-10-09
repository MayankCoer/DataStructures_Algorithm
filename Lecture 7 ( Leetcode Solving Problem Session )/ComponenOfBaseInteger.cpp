#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int m = n;
    int mask = 0;
        
        while(n!=0){
            mask = (mask<<1)|1;
            m = m>>1;

        }
        int ans = (~ans)&mask;
        cout << ans << endl;
}