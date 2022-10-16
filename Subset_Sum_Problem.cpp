class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0; i<N; i++) {
            sum+=arr[i];
        }
        
        if(sum%2!=0){
            return false;
        }
        
        return subsetSum(N, arr, sum/2);
    }
    
    bool subsetSum(int N, int arr[], int target) {
        
        int dp[N+1][target+1];
        
        //intialize
        for(int i=0; i<=N; i++) {
            for(int j=0; j<=target; j++) {
                if(i==0) {
                    dp[i][j] = 0;
                }
                if(j==0) {
                    dp[i][j] = 1;
                }
            }
        }
        
        for(int i=1; i<=N; i++) {
            for(int j=1; j<=target; j++) {
                
                if(arr[i-1]<=j) {
                    dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
                }
                else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        return dp[N][target];
    }
};
