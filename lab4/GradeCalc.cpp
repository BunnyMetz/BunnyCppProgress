#include <iostream>
using namespace std;

int main(){
    int grade ;
//User inputs grade 

    cout << "Please enter Grade out of 100 \n "; 
    cin >> grade ;
//Error message to appear if anything over 100 or less than 0 is entered.
    if (grade < 0 || grade > 100 ){
            cout << "Invalid Value entered \n" ;    
        }
//each grade get a corresponding message
    
    else if (grade >= 90){
        cout << "You got an A. \n" ; 
    }

    else if (grade >= 80){
             cout << "You got a B. \n " ; 
            }

    else if (grade >= 70){
             cout << "You got a C. \n " ; 
            }

    else if (grade >= 60){
             cout << "You got a D. \n " ; 
            }

    else {
        cout << "You got an F. \n " ;
    }
    return 0;
}