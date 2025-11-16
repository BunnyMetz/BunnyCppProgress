#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int> num = {9,8,7,6,5,4,3,2,1} ;
    int sid = 7 ;
    bool idfound = false ;

        for(int id : num ){
            if(id == sid ){
                idfound = true ;
                break;
            }

        }
    cout << (idfound ? "ID found" : "ID not found. \n") ;
    return 0;
}