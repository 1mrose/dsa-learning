#include <iostream>
#include <vector>
#include <iomanip>
#include <cctype>
#include <cmath>
#include <utility>
#include <cstring>
using namespace std;

void TOH (int n, int a, int b, int c){
    if(n>0){
    TOH(n-1, a , c , b);
    cout <<"move "<<a <<" to "<< c<< endl;
    TOH(n-1, b , a , c);
    }
}



int main (){

    TOH(4,1,2,3);
    
    return 0;

}