// This Problem is contributed by Nikhil Pal(nikhilpal755)
// Problem Link : https://leetcode.com/problems/best-sightseeing-pair/

// Solution : 


class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        
        // keep track of  maximum value of (prev_max =>  values[i] + i )
        // during iteration update the ans , ans = max(ans, values[prev_max] + prev_max + values[j] - j)
        //    score =  values[i] + values[j] + i - j
        //    score =  values[i] + i + values[j] - j
        //     we are maximizing values[i] + i , and during iteration we are updating the maximum value of score
        
        int prev_max_idx = 0;
        int ans = 0;
        for(int j=1;j<n;j++){
            
            ans = max(ans, values[prev_max_idx] + prev_max_idx + values[j] - j  );
            if(values[prev_max_idx] + prev_max_idx < values[j] + j ){
                prev_max_idx = j; 
            }
           
        }
        
        return ans;
        
    }
};
