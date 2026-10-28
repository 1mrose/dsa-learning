#include <iostream>
#include <vector>
#include <iomanip>
#include <cctype>
#include <cmath>
#include <utility>
#include <cstring>
using namespace std;

//inserting, appending and deleting from an array

int length =5;


void display(int a[], int length){
    int i;
    for (i=0;i<length;i++){
        cout<< a[i]<<" ";
    }
}
void add(int *a, int x){
    a[length]=x;
    length++;
}
void insert(int *a, int index, int x){\
    if(index>=0 &&index<length){
        int i;
        for(i=length;i>index;i--){
            a[i]=a[i-1];
        }
        a[index]=x;
        length++;
    }  
}

int del(int *a, int index){
    int x;
    if(index>=0 && index<=length){
        int i;
        for(i=index;i<length;i++){
            x=a[i];
            a[i]=a[i+1];
        }
        length--;      
    }
    return x;
}


int main(){
    int a[10]={1,2,43,25,66};
     
    display(a, length);
    cout<<endl;

    insert(a,0,57);
    display(a, length);
    cout<<endl;

    del(a,0);
    display(a, length);

    return 0;
}