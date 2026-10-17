#include <iostream>
#include <vector>
#include <iomanip>
#include <cctype>
#include <cmath>
#include <utility>
#include <cstring>
using namespace std;

// fibonacci using recursion

int fib_rec(int n){
    if (n<=1)
        return n;
    return fib_rec(n-1)+fib_rec(n-2);
}


// fibonacci using iteration

int fib_loop(int n){
    int t0=0,t1=1,sum=0;
    int i;
    if(n<=1)
        return n;
    for(i=2;i<=n;i++){
        sum=t0+t1;
        t0=t1;
        t1=sum;
    }
    return sum;
}

int main(){

    // fibonacci using recursion
    cout<<fib_rec(8)<<endl;
 
    // fibonacci using iteration
    cout<<fib_loop(8);
    return 0;
}