#include<iostream>
using namespace std;
#include<vector>

void print(vector<string> ans){
   for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
   }cout<<endl;
}


void solve(string s, vector<string> &ans, string output, int index, string mapping[]){

    if(index>=s.length()){
        ans.push_back(output);
        return;
    }

    int num=s[index]-'0';
    string str=mapping[num];

    for(int i=0; i<str.length(); i++){
        output.push_back(str[i]);
        solve(s, ans, output, index+1, mapping);
        output.pop_back();
    }
   




}

int main(){
    string s="89";
    vector<string> ans;
    string output="";
    int index=0;
    string mapping[]={"","", "abc", "def","ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    solve(s, ans, output, index, mapping);
    print(ans);
}