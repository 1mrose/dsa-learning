#include <iostream>
#include <vector>
#include <iomanip>
#include <cctype>
#include <cmath>
#include <utility>
#include <cstring>
using namespace std;

int length = 6;

void display(int a[], int length){
    int i;
    for (i=0;i<length;i++){
        cout<< a[i]<<" ";
    }
}

int linearSrch(int a[], int key){
    int i;
    for(i=0;i<length;i++){
        if(a[i]==key){
            return i;
        }
    }
    return -1;
}


int main(){

    int a[10]={213,34,124,44,345,54};   
    display(a,6);
    cout<<endl;

    int pos = linearSrch(a,54);
    cout<<pos;


    return 0;
}