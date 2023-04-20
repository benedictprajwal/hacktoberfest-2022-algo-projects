#include<iostream>
using namespace std;

int doubleElement(int a[],int i, int size){

   if(i>=size){
    return 0;
   }
   for(int j=i+1; j<size; j++){
    if(a[i]==a[j]){
        cout<<a[i]<<" "<<a[j]<<endl;
    }
   }
   return doubleElement(a, i+1, size);
  
    
   
     
}

int main(){
    int a[]={2,4,3,4,3,2};
    doubleElement(a,0, 6);
}