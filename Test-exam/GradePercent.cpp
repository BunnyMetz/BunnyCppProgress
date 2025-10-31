#include <iostream>
using namespace std;

int main(){
    int a , b , c ;
//user is asked to enter 3 values

cout << "Please enter Three Values:  "; 
cin >> a >> b >> c;
//if the value entered all match then a message saying so is displayed
    if (a == b && a == c ){
            cout <<"All numbers are Equal \n ";    
        }
//otherwise the values are checked to see which conditions match
    else if (a > b && a >c ){
        cout << a <<" is the greatest value. \n" ; 
        }
    else if (b > a && b > c ){
             cout << b <<" is the greatest value. \n" ;
            }
//if the two conditions above dont fit then C is the biggest value.
    else { 
            cout << c << "is the greatest value. \n" ;
            }
            


    return 0;
}