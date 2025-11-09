#include <iostream>
using namespace std;

int main(){
   //the first multiple is defined 
    int mult = 3 ;
   //sets the condition so it loops as long as the multiple is less than or the same as 30
    while(mult <= 30){
    //the multiple will be displayed on a new line until it stops     
        cout << mult << " \n" ;
    //incriments the multiple by three    
        mult += 3 ;
    }

    

    return 0;
}