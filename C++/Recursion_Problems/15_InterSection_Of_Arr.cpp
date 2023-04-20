#include<iostream>
using namespace std;

void interSection(int a[], int sizeA, int b[], int sizeB){
//    if(sizeA==0 || sizeB==0){
//     return ;
//    }
    if(a[0]==b[0]){
        cout<<a[0]<<" ";
         interSection(a+1, sizeA-1, b+1, sizeB-1);
        
    }
    else if(a[0]<b[0]){
         interSection(a+1, sizeA-1, b, sizeB);
    }
    else{
         interSection(a, sizeA, b-1, sizeB-1);
    }
}

int main(){
    int a[]={2,2,4,4,5};
    int b[]={2,2,4,5};
    interSection(a, 5, b, 4);
}