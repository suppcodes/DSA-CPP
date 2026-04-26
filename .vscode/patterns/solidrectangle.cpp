#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cout<<"enter row";
    cin>>n;
    cout<<"enter column";
    cin>>m; 
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
        cout<<"*";
        }
        cout<<"\n";
    }
    }