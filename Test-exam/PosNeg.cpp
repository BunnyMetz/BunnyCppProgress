#include <iostream>
using namespace std;

int main(){
    int  a ;

    cout << "Please enter value: \n" ;
    cin >> a ;
//as long as its above zero this message is showen
    if(a > 0){
        cout << a << "is Positve. \n" ;
//otherwise the user is told the number is negative
    }
    else cout << a << "is Negative. \n" ;

    

    return 0;
}