#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
         stack<long long>st;
            st.push(0);
    for(int i=1;i<n;i++){
        if(arr[i]<arr[st.top()]) st.push(i);
        else{
            while(!st.empty()&&arr[st.top()]<arr[i]){
                arr[st.top()]=arr[i];
                st.pop();
            }
            st.push(i);
        }
    }
    while(!st.empty()){
    arr[st.top()]=-1;
    st.pop();
   }
   return arr;
    }
};