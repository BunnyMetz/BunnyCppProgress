#include <iostream>
using namespace std;

int main(){
    //defines the limit of the table while it incrementally increases by one
    for(int a = 1; a <= 5; a++){
    // defines the multiples of five while it incrementally increases by one
        for(int m= 1; m<=5; m++){
           //displays values in a grid style pattern 
            cout << a * m << " ";
        }
        cout << endl;
    }

    

    return 0;
}