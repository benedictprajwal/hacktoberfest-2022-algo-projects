#include<iostream>
using namespace std;
void print(int a[], int s, int e){
    for(int i=s; i<e; i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
bool BinarySrch(int a[], int s, int e, int key){
    print(a, s, e);
    int mid=s+(e-s)/2;
    if(s>e){
        return false;
    }
    if(a[mid]==key){
        return true;
    }

    if(a[mid]>key){
       return BinarySrch(a, s, mid-1, key );
    }
    else{
       return BinarySrch(a, mid+1, e, key);
    }
   
}


int main(){
    int a[]={1,2,3,4, 5};
    int size=5, key=5;
    if(BinarySrch(a, 0, 5, key)){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }
}