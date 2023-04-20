#include <iostream>
using namespace std;
int sum = 0;
int arraySum(int *a, int size)
{
  
     sum = sum + a[0];
   
    if (size == 0 || size == 1)
    {
        return sum;
    }
   
    arraySum(a + 1, size - 1);
   
    
    
   
}

//Another way
int getSum(int a[], int size){
     
    if(size==0){
        return 0;
    }
    if(size==1){
        return a[0];
    }
   
    int remainPart=getSum(a+1, size-1);
    int add=a[0]+remainPart;
   
    return add;
}


int main()
{
    int a[] = {1, 2,3};
    int size=3;
    cout << getSum(a, size)<<endl;
    cout<<arraySum(a, size);
}