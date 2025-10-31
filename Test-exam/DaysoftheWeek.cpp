#include <iostream>
using namespace std;


int main(){
int day ;
  
    cout << "Enter(1-7) for the day of the week \n" ;
    cin >> day ;
//after user enters a value, it is checked until a case matches value entered
     switch(day){
        case 1:
        cout << day <<" is a Monday \n";
            break ; 
        case 2:
        cout << day <<" is a Tuesday \n";
            break ;
        case 3:
        cout << day <<" is a Wednesday \n";
            break ; 
        case 4:
        cout << day <<" is a Thursday \n";
            break ; 
        case 5:
        cout << day <<" is a Friday \n";
            break ; 
        case 6:
        cout << day <<" is a Saturday \n";
            break ; 
        case 7:
        cout << day <<" is a Sunday \n";
            break ; 
// if the value entered doesnt match any cases, an error message is then shown
        deafult :
        cout << "invalid value entered \n" ;}
    
return 0 ;
}