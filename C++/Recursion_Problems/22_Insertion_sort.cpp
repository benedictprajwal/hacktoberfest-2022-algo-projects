#include<iostream>
using namespace std;
void print(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
void InsertionSort(int a[], int i, int k){
    if(k==0 || k==1){
        return ;
    }

   int temp=a[i];
   int j=i-1;
   for(; j>=0; j--){
     
    if(a[j]>temp){
        a[j+1]=a[j];
    }
    else{
        break;
    }
   }
   a[j+1]=temp;

 
    InsertionSort(a, i+1, k-1);
    
}

int main(){
    int a[]={3,4,2,1,0,1};

   InsertionSort(a, 1, 6);
    print(a, 6);
}



