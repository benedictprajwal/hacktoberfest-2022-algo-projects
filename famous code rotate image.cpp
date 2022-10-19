class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<int>arr(matrix.size(),0);
    int t,j;
    for(int i=0; i<matrix.size()-1; i++)
    {
        for(int j=i+1; j<matrix[i].size(); j++){
        int t= matrix[i][j];
        matrix[i][j]=matrix[j][i];
        matrix[j][i]=t;
    }
 
}
for(int i=0;i<matrix.size();i++){     
     for(int j=0;j<matrix[i].size();j++){
    cout<<matrix[i][j]<<" ";
    }
     }
     for(int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
    }
    }
};
