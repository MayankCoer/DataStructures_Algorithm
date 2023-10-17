#include<iostream>
using namespace std;

void update (int arrs[],int size){
    
    arrs[0] = 199;
    cout << "Printing array 1" << endl;
    for (int i = 0; i < size ; i++)
    {
        cout << arrs[i] << " " ;
    }
    cout << endl;
    cout << "Printing array 2" << endl;
   
    
}
int main(){
    int arr[3] = {2,4,6};
    update(arr,3);

      for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;

}