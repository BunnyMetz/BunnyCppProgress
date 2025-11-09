#include <iostream>
using namespace std;

int main(){
//both the sum and the natural number are defined
    int s = 0 , nat = 1 ;
//makes sure that the loop ends once it hits 50    
    while(nat<=50){
//adds the sum and the natural number        
        s += nat ;
//incrimentally increases the natural number by 1 every time it loops        
        nat++ ;
    }   
//once the natural number reaches 50, this message is printed out    
        cout << "The Sum is: " << s << endl;

    

    return 0;
}