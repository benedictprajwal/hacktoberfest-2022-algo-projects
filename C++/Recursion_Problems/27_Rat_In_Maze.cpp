#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(vector<string> &v){

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    
}

bool isSafe(vector<vector<int>> matrix, vector<vector<int>> visited, int x, int y , int n){
// cout<<"H";
    if((x>=0 && x<n) &&(y>=0 && y<n)&& matrix[x][y]==1 && visited[x][y]==0){
            return true;
    }
    else{
        return false;
    }
}

void solve( vector<vector<int>> &matrix, int n,  vector<vector<int>> &visited, int x, int y, string path, vector<string> &ans){
    cout<<x<<" "<<y<<" "<<endl;

    if(x==n-1 && y==n-1){
        // cout<<"h";
        ans.push_back(path);
        return;
    }
    visited[x][y]==1;


    //down
   
    int newx=x+1, newy=y;
    if(isSafe(matrix, visited, newx, newy, n)){
    
        path.push_back('D');
        solve(matrix, n, visited, newx, newy, path, ans);
        path.pop_back();
    }

    //left
     newx=x, newy=y-1;
    if(isSafe(matrix, visited, newx, newy, n)){
         
        path.push_back('L');
        solve(matrix, n, visited, newx, newy, path, ans);
        path.pop_back();
    }

    //right
     newx=x, newy=y+1;
    if(isSafe(matrix, visited, newx, newy, n)){
        // cout<<"h";
        path.push_back('R');
        solve(matrix, n, visited, newx, newy, path, ans);
        path.pop_back();
    }

    //up
     newx=x-1, newy=y;
    if(isSafe(matrix, visited, newx, newy, n)){
        
        path.push_back('U');
        solve(matrix, n, visited, newx, newy, path, ans);
        path.pop_back();
    }

     visited[x][y]==0;
}

int main(){
    vector<vector<int>> matrix={{1, 0, 0, 0},{1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    vector<vector<int>> visited;
    int n=4;
    int x=0;
    int y=0;
       
       for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            visited[i][j]=0;
        }
       }
    
    string path="";
    vector<string> ans;

 cout<<"h";
    solve(matrix, n , visited, x, y, path, ans);
    cout<<"h";
     
     sort(ans.begin(), ans.end());

    print(ans);
    // cout<<matrix.size();



}