#include <iostream>
#include <cstring>
using namespace std;

int main() {
std::string wrd1 , wrd2 ;
//two words are entered
    cout << "Enter two words: \n" ;
    cin >> wrd1 >> wrd2 ;

//strcasecmp is used to ensure that lowercase and uppercase words are treated the same 
//word 1 and word 2 are compared 
int X = strcasecmp(wrd1.c_str(), wrd2.c_str()) ;
//the two words are then displayed in alphabetically
if ( X < 0){
    cout << wrd1 << " comes before " << wrd2 ;
}
else if(X > 0){
    cout << wrd2 << " comes before " << wrd1;
}
//if words entered are the same word
else{
    cout << "Words are the same. \n" ;
}

return 0;
}