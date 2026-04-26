#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter number of lines";
    cin>>n;
     for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<2*j-1;
            
        }
        cout<<"\n";
     }
}