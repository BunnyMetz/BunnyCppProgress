#include <iostream>
using namespace std;

int main() {
    int num = 1 ;
//after defining the start of the count, the limit is also set(10)
    while (num <= 10) {
    //the current value of num is displayed and then checked against if statment
        cout << num << endl ;
    // stops the loop once it hits 6
        if (num == 6) {
            break ;
        }
    // as long as the value isnt equal to six, it increments and then starts again 
        num++ ;
    }

    return 0 ;
}
