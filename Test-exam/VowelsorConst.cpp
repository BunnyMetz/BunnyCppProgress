#include <iostream>
using namespace std;


int main(){
char ltr ;
  
    cout << "Enter a letter:  \n" ;
    cin >> ltr ;
//user enters a letter, it is checked until a case matches value entered
     switch(ltr){
        case 'a':
        case 'A':
//each vowel has two to check for the uppercase as well
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
       cout << "Vowel \n";
        break ; 
// if the char doesnt match any cases then it's a consonant
        default :
        cout << "Consonant \n" ;}
    
return 0 ;
}