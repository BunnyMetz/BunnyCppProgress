//Metz Lab 7
//Simple program to help calculate cal burned during any given amount of time for differnt exersizes 

#include <iostream>
#include <cmath>
using namespace std;
int main() {

//MET values sourced from the Institude of Health and Medicine

//Defining MET Values for each activity

    const double RMet = 8.0;
    const double CMet = 6.0;
    const double SMet = 8.0;
    const double DMet = 4.5;

//R = running, C = cycling, S = soccer, D = dancing
   
    double wgt, dur;
    int act;

    cout << "Enter weight(kg):" << endl;
    cin >> wgt ;
    cout << "Enter duration(min) \n";
    cin >> dur ;

    cout << "Choose your activity(1=Running 2=Cycling 3=Soccer 4=Dancing)\n";
    cin >> act ;

    double cal;

// MET values for 1 and 3 are equal
    if (act == 1 or act == 3)
        cal = dur * RMet * 3.5 * wgt / 200;
    
    else if (act == 2)
        cal = dur * CMet * 3.5 * wgt / 200;

    else if (act == 4)
        cal = dur * DMet * 3.5 * wgt / 200 ;
       
    //Error message shown to user if they entered any imput aside from the choises given

    else{
        cout << "Incorrect input, try again!\n" ;
        return 1; //Stops the program early if error message is given
    
    }
    
//If a valid activity was chosen.
 cout << "calories burned:" << round(cal) << "kcal, Good Job! \n"  ;






    return 0;
}
