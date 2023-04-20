#include<iostream>
#include<vector>
using namespace std;;
void print(vector<vector<int>> &v){

    for(int i=0; i<v.size(); i++){
       for(int j=0; j<v[i].size(); j++){
        cout<<v[i][j]<<" ";
       }cout<<endl;
    }cout<<endl;
}
void solve(vector<int> a, vector<vector<int>>&ans, int index){

    if(index>=a.size()){
        ans.push_back(a);
        return;
    }

    for(int j=index; j<a.size(); j++){
        swap(a[index], a[j]);
        solve(a, ans, index+1);
        swap(a[index], a[j]);
    }
}

int main(){
    vector<int> n={1,2,3};
    vector<vector<int>> ans;
    int index=0;
    solve(n, ans , index);
    print(ans);
}