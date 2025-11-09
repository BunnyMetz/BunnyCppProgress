#include <iostream>
using namespace std;

int main(){
    int i = 1 ;
//after defining i, this says the outer loop with keep happening aslong as i is less than or the number 3   
while (i <= 3) {
    int j = 1 ;
//same thing is happening here for j and the inner loop    
    while (j <= 3) {
//sets the if statement to check if the end value is not equal to 0(making it even)
        if ((i+j) % 2 != 0) {
//if that statment is true(odd) then j is incrimented by 1, skips the rest of the inner loop, and then resets to start again    
            j++ ;
            continue ;
        }
//if the above statment is false(even) then the pair is displayed ,j and i increment up one, and the loop resets
        cout << "(" << i << "," << j << ") " ;
        j++ ;
    }
    cout << endl ;
    i++ ;
}

    

    return 0;
}