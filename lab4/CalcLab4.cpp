#include <iostream>
using namespace std ;

int main(){
    double a,b ;
    char opr ;

    //user is asked to input the first value

    cout << "Please Enter first # value. \n" ;
    cin >> a;

    //user is asked for choice in arithmetic operator

    cout << "Please Enter Operator (- to subtract , + to add , / to divide , * to multiply) \n";
    cin >> opr ;

    //user is then asked for 2nd value
     
    cout << "Please Enter second # value. \n" ;
    cin >> b ;

    // result for corresponding opperator is then given
if(opr == '/' && b == 0 ){
    cout << "Error, division by zero is not allowed. \n" ;
    return 1; 
}
    switch(opr){
        case '+' : 
        cout << ( a + b ) << "is the total. \n" ; 
        break ;

        case '-' :
         cout << (a - b) << "is the total. \n" ; 
         break ;

        case '*' : 
        cout <<(a * b) << "is the total. \n" ; 
        break ; 

        case '/' :
         cout << (a / b) << "is the total. \n" ;
          break ;

        default :
        cout << "Invalid Operator entered. \n" ;
        break ;
    }
 
    

    return 0;
}