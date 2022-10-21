#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print_array(float *A , int n)
{
    for(int i=0; i < n; i++)
    {
        cout<<A[i]<<endl;
    }
    cout<<"\n";
}
void bucketSort(float arr[],int n)
{
    vector<float>b[n];
    for(int i=0 ; i < n;i++)
    {
        int bi=n*arr[i];
        b[bi].push_back(arr[i]);
    }
    for(int i=0; i < n; i++)
    {
        sort(b[i].begin() , b[i].end());
    }
    int index=0;
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < b[i].size(); j++)
        {
            arr[index++]=b[i][j];
        }
    }
}
int main()
{
    float arr[]={0.89 , 0.67 ,0.123 , 0.6543,0.76,0.5,0.34,0.56};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array before sorting "<<endl;
    print_array(arr,n);
    cout<<"Array after sorting "<<endl;
    bucketSort(arr,n);
    print_array(arr,n);
    return 0;
}
