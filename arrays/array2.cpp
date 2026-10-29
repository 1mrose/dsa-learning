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

int get(int a[], int index){
    if(index>>0&&index<=length){
        return a[index];
    }
    return -1;
}
void set (int a[], int index, int x){
    if(index>>0&&index<=length){
        a[index]=x;
        length++;
    }
}

int max(int a[]){
    int max,i;
    if(length<=0)
        return 0;
    else{
        max=a[0];
        for(i=0;i<length;i++){
            if(max<a[i]){
                max=a[i];

            }                   
        }
        return max;
    }
}


int main(){
    int a[10]={1,2,43,25,66};
    int f=get(a,3);
    cout<<f<<endl;
    set(a,2,100);
    display(a,length);
    cout<<"============================"<<endl;
    int m = max(a);
    cout<<m;

    return 0;
}