#include <iostream>
#include <string>
using namespace std;

int main(){
std::string pal ;

    cout << "Please enter word: ";
    cin >> pal ;
 //if the word is a palindrome   
   bool ispal = true ; 

//checks the length of the word   
int l = pal.length();

for( int i = 0; i < l / 2; i++){
     if(pal[i] != pal[l -1 - i]) {  
        ispal = false;
        break;
     }
    }
if(ispal) {
    cout << pal << " is a palindrome. \n" ;
}
else{
    cout << pal << " is not a palindrome. \n" ;
}

    return 0;
}