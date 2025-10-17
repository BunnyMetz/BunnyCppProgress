#include <iostream>
using namespace std;

int main(){
int drk ;

cout << "Please select a drink (1-3)" ;
cin >> drk ;

switch (drk) {
    case 1:
    cout << "You've chosen 1.Coffee \n" ;
        break;

    case 2:
    cout << "You've chosen 2.Tea \n" ;
        break;
    
    case 3:
    cout << "You've chosen 3.Juice \n" ;
        break;
    
    default:
        cout << "Invalid Entry. \n" ;
}

    

    return 0;
}