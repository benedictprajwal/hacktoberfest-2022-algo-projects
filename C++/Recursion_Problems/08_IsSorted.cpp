#include<iostream>
using namespace std;

bool isSorted(int a[], int size){
    if(size==0 || size==1){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }
    else{
        bool ans=isSorted(a+1, size-1);
        return ans;
    }
}

int main(){
    int a[]={1,1,2,3,4,5,5};

    if(isSorted(a, 7)){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Not sorted"<<endl;
    }
}