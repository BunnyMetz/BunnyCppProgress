#include <iostream>
#include <vector>

using namespace std;

int main(){
    int temp ;
    vector<int> a1 = {3,1,7}, a2 ={9,5,2}, a3 , sorted ;
    for(int i: a2 ){
        a3.push_back(i) ;
    }

    for(int i : a1){
        a3.push_back(i) ;
        }

    auto it  = a3.begin() ;
    while(!a3.empty() ){
        it = a3.begin() ;
        temp = a3.at(0) ;
        for(int i = 0 ; i < a3.size(); i++ ){
            if(a3.at(i) < temp){
                it = a3.begin() + i ;
                temp = a3.at(i) ;
            }
        }
        sorted.push_back(temp) ;
        a3.erase(it) ;
    }
    
    cout << "The sorted array is: " ;
    for(int i: sorted){
        cout << i << " " ;
    }

    return 0;
}