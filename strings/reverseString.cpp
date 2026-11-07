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

void swap(char x, char y){
    char temp =x;
    x=y;
    y=temp;

}

void reverse_string(char x[]){ 

    int i,j; 
    char *ptr = new char[string_length(x)];
    for(i=0,j=string_length(x)-1;j>=0;j--,i++){
        ptr[i]=x[j];
        cout<<ptr[i];
    }

}

int main(){
    char x[]={"ilovehorses"};
   // cout<<string_length(x);
    display(x);
    cout<<endl;
    reverse_string(x);
    return 0;
}