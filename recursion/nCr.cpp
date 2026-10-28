#include <iostream>
#include <vector>
#include <iomanip>
#include <cctype>
#include <cmath>
#include <utility>
#include <cstring>
using namespace std;

//factorial
int fact(int n)
{
    if(n==0)return 1;
    return fact(n-1)*n;
}

//nCr using recursion
int nCr(int n,int r)
{
    int num,den;
    
    num=fact(n);
    den=fact(r)*fact(n-r);
    
    return num/den;
}


//alternative
int NCR(int n,int r)
{
    if(n==r || r==0)
        return 1;
    return NCR(n-1,r-1)+NCR(n-1,r);
    
}


int main (){

    cout<<NCR(5,3)<<endl;
    cout<<"=================================================="<<endl;
    cout<<nCr(5,3)<<endl;

    return 0;
}