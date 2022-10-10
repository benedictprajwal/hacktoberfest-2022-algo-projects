// This code is contributed by Sahil Saxena
// Github id = S-ahil-Saxen-a

// Leetcode Medium Ques:  https://leetcode.com/problems/maximum-subarray/

// Solution: 

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum = 0;
        int ans = nums[0];
        
        for(int i = 0 ; i < nums.size(); i++){
            
            sum += nums[i];
            ans = max(ans, sum);
            
            if(sum < 0){
                sum = 0;
            }
        }
        
        return ans;
    }
};