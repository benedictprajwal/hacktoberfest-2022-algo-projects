#include<iostream>
using namespace std;
void print(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
void selectionSort(int a[], int size){
    if(size==0 || size==1){
        return ;
    }
    int i=0; int minIndex=i;
    for(int j=1; j<size; j++){
       
        if(a[j]<a[minIndex]){
            minIndex=j;
        }
    }
   
   
    swap(a[i], a[minIndex]);
 
    selectionSort(a+1, size-1);
    
}

int main(){
    int a[]={2,33,14,1,5};

    selectionSort(a, 5);
    print(a, 5);
}



