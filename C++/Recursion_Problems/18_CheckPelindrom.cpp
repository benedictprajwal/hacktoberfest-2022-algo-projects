#include<iostream>
using namespace std;

bool checkPelindrom(string &s, int i, int j){
    if(i>j){
        return true;
    }

    if(s[i]!=s[j]){
        return false;
    }
    else{
        checkPelindrom(s, i+1, j-1);
    }
}


int main(){
    string s="aabcaa";

    if(checkPelindrom(s, 0, s.length()-1)){
        cout<<"It is a pelindrop"<<endl;
    }
    else{
        cout<<"It is not pelindrom"<<endl;
    }
}