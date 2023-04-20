#include<iostream>
using namespace std;

int pairSum(int a[], int i,int size){
    if(i>=size){
        return 0;
    }
    if(a[i]+a[size]==7){
        cout<<a[i]<<" "<<a[size]<<endl;
        pairSum(a, i+1, size-1);
    }
    else if(a[i]+a[size]<5){
        pairSum(a, i+1, size);

    }
    else{
        pairSum(a, i, size-1);

    }

}
//another way
int PairSum(int a[], int i, int size){
    if(i>=size){
        return 0;
    }

    for(int j=i+1; j<size; j++){
        if(a[i]+a[j]==7){
            cout<<a[i]<<" "<<a[j]<<endl;
        }
    }

    PairSum(a, i+1, size);
}

int main(){
    int a[]={1,3,4,5,6};
    PairSum(a, 0, 5);
}