#include<iostream>
using namespace std;
int main(){
    int n,a,count=0;
    cout<<"enter a number";
    cin>>n;
    a=n;
    while(n>0){
    n=n/10;
    count++;
    }
    if(a==0) cout<<1;
    else cout<<count;
}