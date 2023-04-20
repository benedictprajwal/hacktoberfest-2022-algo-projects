#include<iostream>
using namespace std;

void SourceToDes(int s, int d){

    cout<<"Step "<<s<<" to "<<"destination "<<d<<endl;
    if(s==d){
        cout<<"Destination Reached !!!!"<<endl;
        return;
    }
    s++;
    SourceToDes(s, d);
}


int main(){

    SourceToDes(1, 10);
    
}