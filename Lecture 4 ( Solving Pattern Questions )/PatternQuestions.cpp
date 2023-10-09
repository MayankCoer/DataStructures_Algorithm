#include <iostream>
using namespace std;
int main()
{

    /* Pattern 1 */
    // int n ;
    // cin >> n;
    // int i = 1 ;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){

    //         cout << j;
    //         j = j + 1;
            
    //     }
        
    //     cout << endl;
    //     i = i + 1;
    // }

    /*Pattern 2*/

    // int n ;
    // cin >> n;
    // int i = 1 ;
    // int count = 1 ;
    // while(i<=n){
    //     int j = 1 ;
    //     while(j<=n){
    //         cout << count;
    //         count = count + 1;
    //         j = j + 1 ; 
    //     }
    //     cout << endl;
    //     i =  i + 1 ;
    // }

    /*Pattern 3*/

    // int n ;
    // cin >> n;
    // int i = 1 ;
    
    // while(i<=n){
    //     int j = 1 ;
    //     while(j<=i){
    //         cout << "*" ;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    /*Pattern 4*/

    // int n ;
    // cin >> n;
    // int i = 1 ;
    // while ( i <= n){
    //     int j = 1 ;
    //     while (j<=i)
    //     {
    //         cout << i << " ";
    //         j = j + 1 ;
    //     }
    //     cout << endl;
    //     i = i + 1 ;
        
    // }

    /*Pattern 4*/
    // int n ;
    // cin >> n;
    // int i = 1 ;
    // int count = 1;
    // while(i<=n){
    //     int j = 1 ;
    //     while (j<=i){
    //         cout << count << " ";
    //         count = count + 1 ;
    //         j = j + 1 ;
    //     }
    //     cout << endl;
    //     i = i + 1 ;
    // }

    /*Pattern 5*/
    
//     int n ;
//     cin >> n;
//     int i = 1 ;
    
//     while(i<=n){
//         int j = 1 ;
//         int count = i;
//         while(j<=i){
//             cout << count  << " ";
//             count = count + 1 ;
//             j = j + 1 ; 
//         }
//         cout << endl;
//         i = i + 1 ;
//     }
// }

/*Pattern 6*/
    // int n ;
    // cin >> n;
    // int i = 1 ;
    // while (i<n)

    // {
    //     int j = 1;
    //     while(j<=i)
    //     {
    //         cout << i - j + 1 << " ";
            
    //         j=j+1;
    //     }
    //     cout << endl;
    //     i=i+1;
    // }

    /*Pattern 7*/
    // int n ;
    // cin >> n;
    // int i = 1;
    // while(i<=n){
    //     int j = 1 ;
    //     while(j<=n){
    //         char ch =  'A' + i - 1 ;
    //         cout << ch ;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;

    // }

    /*Pattern 8*/
    // int n ;
    // cin >> n;
    // int i = 1 ;
    // int val = 0;
    // while(i<=n){
    //     int j = 1 ; 
        
    //     char ch = 'A' + val;
    //     while(j<=n){
           
    //         cout << ch << " ";
    //         j = j + 1 ;

    //     }
    //     val = val + 1;
    //     cout << endl;
    //     i = i + 1 ;
    // } 
    
    /*Pattern 9*/
    //  int n ;
    // cin >> n;
    // int i = 1 ;
    // int val = 0;
    // while(i<=n){
    //  int j = 1 ;
    //  while(j<=n){
    //     char ch = 'A' + val;
    //     cout << ch << " ";
    //     val = val + 1 ;
        
    //     j = j + 1 ;
    //  }   
    //  cout << endl;
    //  i = i +1;
    // }

    /*Pattern 10*/
    //  int n ;
    // cin >> n;
    // int i = 1 ;  
    // while(i<=n){
    //     int j = 1;
        
    //     while(j<=n){
    //         char ch = 'A' + i+j-2; 
    //         cout << ch << " ";
    //         j = j + 1 ;
    //     }
    //     cout << endl;
    //     i = i + 1 ;
    // }

    /*Pattern 11*/
    //  int n ;
    // cin >> n;
    // int i = 1 ;  
    // int val = 0 ;
    // while(i<=n){
    //     int j = 1;        
    //     while(j<=i){
    //         char ch = 'A' + val;
    //         cout << ch << " ";
    //         j = j + 1 ;
    //     }
    //     val = val + 1;
    //     cout << endl;
    //     i = i + 1;
    // }

    /*Pattern 12*/
    // int n;
    // cin >> n ;
    // int i = 1;
    // while(i<=n){
    //     int j = 1 ;
    //     while(j<=i){
    //         char ch = 'A' + i + j - 2;
    //         cout << ch << " ";
    //         j = j +1;
    //     }
    //     cout << endl;
    //     i = i + 1 ;
    // }

    /*Pattern 13*/

    // int n;
    // cin >> n ;
    // int i = 1;
    // while(i<=n){
    //     int j = 1 ;
    //     char ch = 'A'+ n-i ;
    //     while(j<=i){
            
    //         cout << ch << " ";
    //         ch = ch + 1;
    //         j = j + 1 ;
           

    //     }
    //     cout << endl;
    //     i = i + 1 ;
    // }

   /*Pattern 15*/
    // int n;
    // cin >> n ;
    // int i = 1;
    // while(i<=n){
        
    //     int star = n - i + 1;
    //     int j = 1;
    //     while(j<=star){
            
    //         cout << '*' << " ";
    //         j = j + 1 ;
    //     }
    //     cout << endl;
    //     i = i + 1 ;
    // }

    /*Pattern 16*/
    int n;
    cin >> n ;
    int i = 1;
    int p1 = n;
  
    while(i<=n){
        int j = 1 ;
        int inc = j ;
        while(j<=p1){
            cout << j << " " ;
            j = j + 1 ;
        }
        
        
        p1 = p1 - 1;     
        cout << endl;
        i = i + 1;
    }

    

    
}    
