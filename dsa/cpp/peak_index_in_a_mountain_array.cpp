/*

    Name: Ayush Bansal
    Github Username: ayush-1601
    GitHub Id: 83022390

    
    Problem link: https://leetcode.com/problems/peak-index-in-a-mountain-array/
*/


#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max=INT_MIN;
        int index;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>max){
                max=arr[i];
                index=i;
            }
        }
        return index;
    }
};