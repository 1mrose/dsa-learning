#include <iostream>
#include <vector>
#include <iomanip>
#include <cctype>
#include <cmath>
#include <utility>
#include <cstring>
using namespace std;

int length = 6;


void swap(int *x, int *y){
    int temp;
    temp =*x;
    *x=*y;
    *y=temp;
}

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
            //swapping the key element w the previous element
            if(i!=0){
            swap(a[i],a[i-1]);
            return i-1;
            }
             
            return i;
        }
    }
    return -1;
}


//will add sort fucntion later

/*void sort(int *a){
    int l= -32768; // lowest num possible in 16 bit
    int i;
    for(i=0;i<(sizeof(a)/sizeof(a[0]));i++) {
        if
    }
}*/

int lengthx= 10;

int binarySrch(int a[],int key){
    int l =0;
    int h=length-1;
    
    int i;
    for(i=0;i<lengthx;i++){
        int mid = (l+h)/2;
        if(key==a[mid]){
            return mid;
        }
        else if(key<a[mid]){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
    
}




int main(){

    int a[10]={213,34,124,44,345,54};   
    display(a,6);
    cout<<endl;

    int pos = linearSrch(a,54);
    cout<<pos<<endl;
    display(a,6);
    cout<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    //for binary search arrays needs to be sorted

    int b[10]={2,4,7,9,12,15,17,25,27,35}; 
    display(b,10); 
     
    int position= binarySrch(b,2);
    cout<<endl<<position;


    return 0;
}