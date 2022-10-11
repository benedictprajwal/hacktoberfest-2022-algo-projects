//yat2k
//Bubble, Insertion, Merge, Selection and Quick sort
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &arr, int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j]= temp;
            }
        }
    }
    return;
}

void insertionSort(vector<int> &arr,int n){
    for(int i=1;i<n;i++){
        int current = arr[i];
        int j= i-1;
        while(arr[j]>current and j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    
    return;
}

void merge(vector<int> &arr,int s, int e){
    vector<int> temp;
    int m = s+(e-s)/2;
    int i = s;
    int j=  m+1;
    
    //choose the smallest of two sets one at a time
    while(i<=m and j<=e){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);
        }
    }
    
    //one of the set ends first so once it finishes, put the rest of the other set in the temp array
    while(i<=m){
        temp.push_back(arr[i++]);
    }
    while(j<=e){
        temp.push_back(arr[j++]);
    }
    
    //now to put that temp array elements back into our original array 
    int k=0;
    for(int i=s;i<=e;i++){
        arr[i]= temp[k++];
    }
    
    return;
    
}

void mergeSort(vector<int> &arr, int s, int e){
    //base case
    if(s>=e){
        return;
    }
    int m = s + (e-s)/2;
    
    mergeSort(arr,s,m);
    mergeSort(arr,m+1,e);
    return merge(arr,s,e);
}

void selectionSort(vector<int> &arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    return;
}
void swap(vector<int> &arr,int i,int j){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partition(vector<int> &arr,int l,int r){
    int pivot = arr[r];
    int i= l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}

void quickSort(vector<int> &arr,int l,int r){
    if(l<r){
        int pi = partition(arr,l,r);
        
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);
    }
}
int main()
{
    int n;
    cin>>n;
    int choice;
    vector<int> arr(n);
    int s = 0;
    int e = n-1;
    
    //giving input 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Enter\n1 for bubble sort,\n2 for insertion sort and \n3 for merge sort\n4 for selection sort\n5 for quick sort\nYour choice: ";
    cin>>choice;
    //main code here
    switch(choice){
        case 1:bubbleSort(arr,n);
                break;
        case 2:insertionSort(arr,n);
                break;
        case 3:mergeSort(arr,s,e);
                break;
        case 4:selectionSort(arr,n);
                break;
        case 5:quickSort(arr,s,e);
                break;
        default:cout<<"Wrong option so heres the array you typed lol\n";
        
    }
    //printing the elements 
    for(int ele: arr){
        cout<<ele<<" ";
    }
    

    return 0;
}



