#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter something";
    cin>>ch;
    int x=(int)ch;
    if((x>=65 && x<=90) || (x>=97 && x<=122)){
        cout<<" that is an alphabet";
    }
    else
    cout<<"that is not an alphabet";
}