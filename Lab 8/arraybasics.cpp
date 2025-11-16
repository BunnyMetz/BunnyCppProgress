#include <iostream>

using namespace std;

int main(){
//amount of integers is defined 
    int n = 3 ; 
//array size is set with the number of integers    
    int m[n] ;
//integers are created to store coresponding values later on in code   
    int sum = 0, ave , max , min ;
//prompts the user to enter the amount of values previously set
    for(int i = 0 ; i < n ; i++){
        cout << "Enter integer #" << i+1 << endl ;
        cin >> m[i] ;
//values entered are added together then stored in sum as the user enters them        
        sum += m[i] ;
        if(i == 0 ){
            min = m[i] ;
            max = m[i] ;
        }
//compares integers together to determine which value is bigger and the smallest        
        if(m[i] > max ){
            max = m[i] ;
        }

        if(m[i] < min ){
            min = m[i] ;
        }

    }
//average is found by dividing sum with amount of numbers in the array    
    ave = sum / n ;
        
    
//corresponding values are displayed
    cout << "The Sum of all elements is: " << sum << endl;
    cout << "The Average is: " << ave << endl ; 
    cout << "Max value is: " << max << endl ;
    cout << "Minimum value is : " << min << endl ;

    

    return 0;
}