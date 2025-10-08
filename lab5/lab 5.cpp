#include <iostream>
using namespace std;
int main(){
    int totalNoPara, totalPara;
    //Total WITHOUT Parantheses
    totalNoPara = 100-20 * .01 + 5 +3 * 2;
    cout << "Q1\n";
    cout << "100-20 * .01 + 5 +3 * 2;" << totalNoPara << endl;

    //Total WITH Parentheses 
    totalPara = 100-20 * .01 + (5 + 3) * 2;
    cout << "100-20 * .01 + (5 + 3) * 2 = " << totalPara << "|| PEMDAS means the 5 + 3 will be calculated before rather than after the multiplication (*2)\n\n" ;
    
    //Defining both slice count and amount of friends
    int slc = 14 , frnd = 4;

    cout << "Q2\n" ;
    cout << "Each Friend gets " << (slc / frnd) << " slices. There are " << (slc % frnd) << " slices left. \n\n";


    float kpm  = 300 / 25 ;

    cout << "Q3\n";
    cout << "A car with 25 liters of fuel travling at 350 km would average " << kpm << endl;






    return 0;

}