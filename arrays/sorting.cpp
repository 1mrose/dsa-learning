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
                swap(a[j],a[j+1]);     //can use swap for algorithm
            }
        }
    }

}
/*void rightshift(int a[], int)

void insertsort(int a[], int length, int x){
    int i;
    for(i=0;i<length;i++){
        if(x>a[i]){
            i++;
        }
        else{

        }
    }
}      */


int main (){
    int a[]={1,10,6,4,8};
    int x= checkifsort(a,5);
    cout<<x<<endl;
    sortarray(a,5);
    display(a,5);


    return 0;
}