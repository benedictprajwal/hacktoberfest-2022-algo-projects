#include<iostream>
#include<vector>
using namespace std;
void print(vector<string> ans){
   for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
   }cout<<endl;
}

void solve(vector<string> &ans, string str, string output, int i){
    if(i>=str.length()){
        // if(output.length()>0){
            ans.push_back(output);
        // }
        return;
    }

    //exclude
    solve(ans, str, output, i+1);
    //include
    output.push_back(str[i]);
    solve(ans, str, output, i+1);
    

}
vector<string> subsequences(string str){
    vector<string> ans;
    string output="";
    solve(ans, str, output, 0);
    return ans;
}

int main(){
    string s="str";
    vector<string> str=subsequences(s);
    print(str);
}