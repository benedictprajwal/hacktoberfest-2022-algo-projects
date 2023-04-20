#include<iostream>
using namespace std;

bool LinearSrch(int a[], int size, int key){

    if(size==0){
        return false;
    }
    if(a[0]==key){
        return true;
    }
    else{
        LinearSrch(a+1, size-1, key);
    }
}


int main(){
    int a[]={1,2,3,45, 5};
    int size=5, key=15;
    if(LinearSrch(a, size, key)){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }
}