#include <iostream>
#include <string>
using namespace std;

int main(){
std::string wrd ;

    cout << "Please enter word: ";
    cin >> wrd ;
//word is checked to make sure that 3rd letter can be replaced, then it is replaced by x    
if (wrd.length() >= 3){ 
     wrd[2] = 'x' ;
//modified word is then displayed
    cout << "Modified word: " << wrd << endl ;}
else {
    cout <<"Word entered is not long enough to modify. \n" ;
}
    return 0;
}