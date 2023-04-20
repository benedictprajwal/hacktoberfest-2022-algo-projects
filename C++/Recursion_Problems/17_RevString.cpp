#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(string &str, int i)
{
   int j=str.length()-i-1;
    if(i>str.length()-i-1){
        return;
    }

    swap(str[i], str[j]);
    // i++;
    // j--;
    reverse(str, i+1);
}

int main(){
    string str="abcde";
    reverse(str, 0);

    cout<<str;

}