#include <iostream>
#include <vector>
#include <iomanip>
#include <cctype>
#include <cmath>
#include <utility>
#include <cstring>
#include <algorithm>
using namespace std;

int length = 5;

void display(int a[], int length){
    int i;
    for (i=0;i<length;i++){
        cout<< a[i]<<" ";
    }
}

int checkifsort (int a[], int length){
    int i;
    for(i=0;i<length-1;i++){ //length-1 otherwise i+1 will give a garbage value
        if(a[i]>a[i+1])
            return -1;          
    }
    return 0;
}



void sortarray(int a[], int length){
    int i,j;
    for(i=0;i<length-1;i++){
        for(j=0;j<length-1;j++){
            if (a[j]>a[j+1]){
                swap(a[j],a[j+1]);     //can use swap using algorithm
            }
        }
    }

}


void insertsort(int a[], int &length, int x){
    int i;
    int j;
    for(i=0;i<length;i++){
        if(x>a[i]){ 
            continue;        
        }
        else{          
            for(j=length-1;j>=i;j--) {
                a[j+1]=a[j];
            }
            a[i]=x;
            length++;
            return;
        }
    }
    a[length]=x;
    length++;
}     


int main (){

    int a[8]={1,2,6,7,8};

    int x= checkifsort(a,length);
    cout<<x<<endl;
    sortarray(a,length);
    display(a,length);
    cout<<endl<<"========================"<<endl;

    insertsort(a,length,9); //insert fucn not working
    display(a,length);
     
    return 0;
}