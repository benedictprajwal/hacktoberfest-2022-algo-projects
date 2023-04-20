#include<iostream>
using namespace std;

void fib(int n){
   int t1=0, t2=1;
   int nextTerm=t1+t2;
   for(int i=3; i<=n; i++){

    t1=t2;
    t2=nextTerm;
    nextTerm=t1+t2;
   }
   cout<<nextTerm;

}

int main(){

    fib(5);
   
}