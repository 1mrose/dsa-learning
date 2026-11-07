#include <iostream>
#include <vector>
#include <iomanip>
#include <cctype>
#include <cmath>
#include <utility>
#include <cstring>
#include<string>
using namespace std;

void display(char x[]){
    int i{0};                

//you have to put '/0' explicitly when using 'x' cause it does not automatically add /0 at the end so the loop never stops but "hello" puts a /0 at the end so you don't need to worry about it

    while(x[i]!='\0'){
        cout<<x[i];
        i++;
    }
}

int string_length(char x[]){
    int i{0};
    while( x[i] !='\0'){
        i++;
    }
    return i;
}

void uppercase(char x[]){
    int i;
    for(i=0;i<string_length(x);i++){
        if(x[i]>=97 && x[i]<=122){
            x[i]=x[i]-32;
        }
    }
}
void lowercase(char x[]){
    int i;
    for(i=0;i<string_length(x);i++){
        if(x[i]>=65 && x[i]<=90){
            x[i]=x[i]+32;
        }
    }
}


int main(){
    
    char x[10]={"sybau"};  
    display(x);
    cout<<endl<<string_length(x)<<endl;
    uppercase(x);
    display(x);
    

    return 0;
}

