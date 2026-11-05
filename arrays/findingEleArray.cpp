#include <iostream>
#include <vector>
#include <iomanip>
#include <cctype>
#include <cmath>
#include <utility>
#include <cstring>
using namespace std;


class Array{
  private:
    int *A;
    int length;
    int size;
   public:
      Array(int size, int length, bool readElements = true) {

        this->size = size;
        this->length = length;

        A = new int[size];

        if (readElements) {
            cout << "Enter array elements in sorted manner:\n";

            for (int i = 0; i < length; i++) {
                cout << "Enter element " << i << ": ";
                cin >> A[i];
            }
        }
    }

 
    void display(){
        int i;
        for(i=0;i<length;i++)   
            cout<<A[i]<<"  ";
        cout<<endl;
    }

    void set(int index, int x){
        if (index >= 0 && index < length){
            A[index] = x;
        }
    }

    int get(int index){
        if (index >= 0 && index < length){
            return A[index];
        }
    }

    Array merge(Array &b){
        Array C(this->length+b.length, this->length+b.length, false);
        int i,j,k;
        i=j=k=0;
        while(i<this->length && j<b.length){
            if(A[i]<b.get(j)){
                C.set(k++,A[i++]);
            }
            else{
                C.set(k++,b.get(j++));
            }
        }
        for(;i<length;i++){
            C.set(k++,A[i]);
        }
        for(;j<b.length;j++){
            C.set(k++,b.get(j));
        }
        return C;
    }


//---------------------------------------------------------------

 int find( int element){

    int i;
    for(i=0;i<this->length;i++){
        if(this->get(i)==element){
            return i;
            
        }
        
            
    }
    return -1;
 } 

//---------------------------------------------------------------


    ~Array(){
        delete[] A;
    }

};

int main(){
 Array a(10,5,true);
 a.display();
 int x= a.find(1);
 cout<<endl<<x;
    return 0;
}