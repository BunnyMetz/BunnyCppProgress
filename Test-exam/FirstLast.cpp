#include <iostream>
#include <string>
using namespace std;

int main(){
std::string str ;

    cout << "Please enter word: ";
    cin >> str ;

//two seperate character is made to store the first and last letter of the word entered    
char fchar = str[0] ;
char lchar = str.at(str.length() - 1);

//both characters are then displayed
    cout << "First character is " << fchar << endl ;
    cout << "Last character is " << lchar << endl ;

    return 0;
}