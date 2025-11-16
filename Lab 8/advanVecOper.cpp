#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec1 = {1,2,3,4,4,5,5,3,2,1,6,7,8,7,7,6,5,9,0,8,7,6}, shown , sorted ;
    int temp , lastval , count;
    auto it  = vec1.begin() ;

    while(!vec1.empty() ){
     
        it = vec1.begin() ;
        temp = vec1.at(0) ;
        for(int i = 0 ; i < vec1.size() ; i++ ){
            if(vec1.at(i) < temp){
                it = vec1.begin() + i ;
                temp = vec1.at(i) ;
            }
        }
        sorted.push_back(temp) ;
        vec1.erase(it) ;
    }
    lastval = sorted.front() ;
    count = 0 ;
    for(int i = 0; i < sorted.size() ; i++ ){
        if(sorted.at(i) == lastval ){
            count++ ;
        } else{
            if(count > 1){
                cout << lastval << " reapeated  " << count << " times. \n" ;
            }
            lastval = sorted.at(i) ;
            count = 1 ;
        }
    }
    return 0;
}