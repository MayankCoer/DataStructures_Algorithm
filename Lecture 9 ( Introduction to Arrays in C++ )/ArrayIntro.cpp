#include <iostream>
using namespace std;
int main(){

    int num[15];

    int num2[3] = {2,5,7};
    cout << "value at 1 index : " << num2[1] << endl;

    int num3[10]={3,1};
    int n = 10;
    for(int i = 0 ; i <n ; i++){
        cout << num3[i] << endl;
    }
    cout << "All good" << endl;
}