#include <iostream>
using namespace std;

int main(){
   //defines the amount of rows to stop at four and incrementally increase by 1
for (int a = 1; a <= 4; a++) {       
    //defines the amount of columns to a max equal to a , while also incrementally increasing by 1
    for (int j = 1; j <= a; j++) { 
    //displays * for every position    
        cout << "* ";
    }
    cout << endl;
}
    

    return 0;
}