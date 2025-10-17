#include <iostream>
using namespace std;

int main(){
    int val ;
//user is prompted to enter a value
    cout << "Please enter a number. \n" ; 
    cin >> val ; 

    //message to show if number is zero
    if(val == 0){
        cout << "The value is Zero. \n" ; 
        return 1;      
    }
    //message to show if number is negative
    else if (val < 0){
        cout << "The value is Negative. \n" ;
        return 1;
    }
    //message to show if number is positive
    else {
         cout << "The Value is Positive. \n" ;
    }
    
    return 0;
}