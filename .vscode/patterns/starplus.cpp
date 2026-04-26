#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter number of lines";
    cin>>n;
    int mid=(n+1)/2;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==mid || j==mid) cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }
}