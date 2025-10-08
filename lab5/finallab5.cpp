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


    double kpm  = 300 / 25 ;

    cout << "Q3\n";
    cout << "A car with 25 liters of fuel travling at 350 km would average " << kpm << "kpm n" ;

    double average, average2, average3;
    average = (7 + 3 )/2;
    cout << "Q4\n" ;
    cout << average << endl; //This wont show decimal precision becuase it's still a whole number

    average2 = (7.0 + 3.0)/2.0;
    cout << average2 << endl;

    average3 = (double)(6 +1 +3)/3;
    cout << average3 << endl; //this should return 3.3333...

    float HgtCm, HgtM;
    cout << "Q5\n";
    cin >> HgtCm;
     HgtM = (HgtCm / 100.0);
    cout << "Height in Meters is " << HgtM << "m\n";



    return 0;

}