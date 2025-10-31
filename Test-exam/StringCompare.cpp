#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1, str2 ;

    cout << "Enter two words : " ;
    cin >> str1 >> str2 ;
// compares the two words entered to see if they're the same
    if( str1 == str2 )
        cout << str1 << " and " << str2 << " are exactly the same";
    
    else 
        cout << str1 << " and " << str2 << " are not exactly the same";
    
        


    

    return 0;
}