class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    sort(arr,arr+n);
	    return arr[n-1];
	}
};
