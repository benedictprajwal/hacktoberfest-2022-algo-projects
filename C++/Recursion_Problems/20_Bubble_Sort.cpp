#include<iostream>
using namespace std;
void print(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
void bubbleSort(int a[], int size){
    if(size==0 || size==1){
        return ;
    }

    for(int i=0; i<size-1; i++){
        if(a[i]>a[i+1]){
            swap(a[i], a[i+1]);
        }
    }
    bubbleSort(a, size-1);
}

int main(){
    int a[]={1,23, 2 ,5,6,4};

    bubbleSort(a, 6);
    print(a, 6);
}