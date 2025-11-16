#include <iostream>
using namespace std;

int main(){
    int n = 3 ;
    int array1[n] = {4, 7, 3} ;
    int array2[n] ;
    
    
    for(int i = n ; i > 0 ; i--){
        array2[i-1] = array1[n-i] ;        
    }

    cout << "The reversed Array: "; 
    for ( int a2 : array2 ){
            cout << a2 << " " ;
    }
    

    cout << "The original Array: " ;
    for(int a1 : array1 ){
           cout << a1 << " " ;
    }


    return 0;
}