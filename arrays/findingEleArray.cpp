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
        return -1;
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


//-----------------------finding function----------------------------------------

 int findpos( int element){

    int i;
    for(i=0;i<this->length;i++){
        if(this->get(i)==element){
            return i;
            
        }
        
            
    }
    return -1;
 } 

//------------finding duplicate elements in a sorted array------------------------

void find_dup (int element){
    int i,j;
    for (i=0;i<this->length-1;i++){
        if(this->get(i)==this->get(i+1)){
            j=i+1;
                while(this->get(j)==this->get(i)){
                    j++;
                }
            cout<<get(i)<<" is "<<j-i<<"times in this array"<<endl;
            i=j-1;
        }
    }
}

//------------finding duplicate elements in a unsorted array------------------------

int max(){
    int m=this->get(0);
    int i;
    for(i=0;i<this->length;i++){
        if(m<this->get(i)){
            m=this->get(i);
        }
    }
    return m;

}

void find_dup_unsorted(int element){

    int *ptr = new int[this->max()]{};
    int i;
    
    for(i=0;i<this->length;i++){
        if( ptr[this->get(i)]>=1){
            ptr[this->get(i)]++;
        }
        else
            ptr[this->get(i)]=1;
    }
    for(i=0;i<this->max();i++){
        if( ptr[this->get(i)]>1){
            cout<<this->get(i)<<" is "<<ptr[this->get(i)]<< " times in the array"<<endl;
            ptr[this->get(i)] = 0;
        }
    }


}

    ~Array(){
        delete[] A;
    }

};

int main(){

    Array a(9,9,true);
    a.display();
    int x= a.findpos(1);
    cout<<endl<<x<<endl<<endl;
//  a.find_dup(3);
    a.find_dup_unsorted(3);

    return 0;
}