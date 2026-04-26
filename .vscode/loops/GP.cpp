#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter anumber";
    cin>>n;
    int a=1;
    for(i=1;i<=n;i++){
        cout<<"\n"<<a;
        a=a*2;
    }
}