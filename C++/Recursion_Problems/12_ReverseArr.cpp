#include<iostream>
using namespace std;
void print(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
void reverse(int a[], int size){
   
    if(size/2==0){
        return;
    }
    else{
        print(a, size);
        swap(a[0], a[size-1]);
        reverse(a+1, size-2);
    }

}


int main(){
    int a[]={1, 2, 4,5, 3};
    reverse(a, 5);
    print(a, 5);

}