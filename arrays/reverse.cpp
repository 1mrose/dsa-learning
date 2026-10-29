#include <iostream>
#include <vector>
#include <iomanip>
#include <cctype>
#include <cmath>
#include <utility>
#include <cstring>
using namespace std;

int length = 5;
void display(int a[], int length){
    int i;
    for (i=0;i<length;i++){
        cout<< a[i]<<" ";
    }
}

void reverse( int a[], int length){
    int temp,i,j;
    for(i=0,j=length-1;i<j;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
} 

int main(){
    int a[10]={1,2,3,4,5};
    display(a,length);
    cout<<"====================="<<endl;
    reverse(a, length);
    display(a,length);
    return 0;

    
}