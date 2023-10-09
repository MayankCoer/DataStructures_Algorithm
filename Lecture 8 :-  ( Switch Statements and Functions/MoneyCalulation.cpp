#include<iostream>
using namespace std;
int main(){
    int n , notes;
    cin >> n;
    int n1 = 100;
    int n2 = 50;
    int n3 = 20;
    int n4 = 1;
    switch(n1){

        case 100 :
            if(n>=100){
            notes = n / n1;
            cout << "Notes required of 100 is : " << notes << endl;
            n = n % n1;
            }

        switch (n2){
        case 50:
            if(n>=50){
                notes = n / n2;
                cout << "Notes of 50 is : " << notes << endl;
                n = n % n2;
            }
        
        }
        
        
        switch (n3){
             case 20:
                if(n>=20){
                    notes = n / n3;
                    cout << "Notes of 20 is : " << notes << endl;
                    n = n % n3;
                }
            }
       
        switch (n4){
        case 1:
                if(n>=1){
                    notes = n / n4;
                    cout << "Notes of 1 is : " << notes << endl;
                    n = n % n4;
                }
            }
        
        

    }
}