#include<iostream>
using namespace std;
int main(){
    int n,pro=1,ld=0;
    cout<<"enter a number";
    cin>>n;
    while(n>0){
        ld=n%10;
        pro=pro*ld;
        n=n/10;
    }
    cout<<pro;
}