#include <iostream>
using namespace std;

int main(){
    int lpyr;

//User is prompted to enter the year
    cout << "Please Enter Year: " ;
    cin >> lpyr ; 

//checks to make sure year is divisible by 4 but not 100
    if (lpyr % 4 == 0 && lpyr % 100 != 0  or lpyr % 400 == 0 )
            cout << lpyr << " is a Leap Year. \n" ;

//Message stating that the year entere isnt a leap year
    else 
        cout << lpyr << " is not a Leap Year. \n" ;


    return 0;
}