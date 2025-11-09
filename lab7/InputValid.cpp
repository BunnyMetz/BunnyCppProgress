#include <iostream>
using namespace std;

int main(){
    int num ;
    //use is promted to ender a positive number
    cout << "Please enter a Positive number: " ;
    cin >> num ;
//sets the condition to make the program loop again
//if the number entered is anything equal to or smaller than -1 the statment is true
    while (num <= -1){
   //as long as the number entered makes the statment true, the user will be shown this message
   //as well as being asked to enter another value    
        cout << "Invalid Entry, Please use a Positive number: " ;
        cin >> num ;
    }
//message is shown when the value entered is a positive number
        cout << "You entered: " << num << endl;
        return 0;
}