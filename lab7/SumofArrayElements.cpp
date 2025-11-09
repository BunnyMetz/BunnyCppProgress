#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20, 25} ;
    int i = 0,size = 5, sum = 0 ;                  
        while (i < 5) { 
            sum += arr[i] ;
            i++ ;             
    }
        cout << "The sum is: " << sum << endl ;   
    return 0;
}