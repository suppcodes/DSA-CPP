#include<iostream>
using namespace std;
int main(){
    int i,j,k,l,n,o;
    cout<<"enter number of lines";
    cin>>n;
    int m=n-1;
    for(o=1;o<=2*n-1;o++)
    cout<<"*";
    cout<<"\n";
    for(i=1;i<=m;i++){
        for(j=1;j<=m-i+1;j++){
            cout<<"*";
        }
        for(k=1;k<=2*i-1;k++){
            cout<<" ";
        }
        for(l=1;l<=m-i+1;l++){
            cout<<"*";
        }
        cout<<"\n";
    }
    
}