#include <iostream>
#include <vector>
#include <iomanip>
#include <cctype>
#include <cmath>
#include <utility>
#include <cstring>
using namespace std;



double e(int x, int n){
    static double p,f;
    p=1;
    f=1;
    double r;
    if (n==0)return 1;
    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}    
int main (){
    cout<<e(3,7);
    return 0;
}