#include <iostream>
#include <vector>
using namespace std;

int main(){
vector<int> num ;
int n = 3 , v1 ;

    cout<< "Please enter Integers: " ;
        for (int i = 0 ; i < n ; i++ ){
            cin >> v1 ;
            num.push_back(v1) ;
        }
    cout << "The size of the vector is: " << num.size() << endl ;
    cout << "The capacity of the vector is: " << num.capacity() << endl;
    

    

    return 0;
}