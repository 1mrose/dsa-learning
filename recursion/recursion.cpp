#include <iostream>
#include <vector>
#include <iomanip>
#include <cctype>
#include <cmath>
#include <utility>
#include <cstring>
using namespace std;

// getting sum of n natural numbers using recursion
int sum(int n){    
    if(n==0){
        return 0;
    }
    else{
        return sum(n-1)+n;
    }
}


// getting factorial of a nummber using recursion
 int factorial(int n){
    if(n==0)
        return 1;
    else{
        return factorial(n-1)*n;
    }
 }

int main(){

// getting sum of n natural numbers using recursion
    cout<<"sum of the first n natural number is: "<<sum(10)<<endl;

// getting factorial of a nummber using recursion
    cout<<"factorial of n is: "<<factorial(5)<<endl;



    return 0;
}