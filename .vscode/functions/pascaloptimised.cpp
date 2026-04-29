#include<iostream>
using namespace std;
int main(){
    int i,n,j;
    cout<<"enter number of lines";
    cin>>n;
    for(i=1;i<=n;i++){
        int curr=1;
        for(j=1;j<=i;j++){
            cout<<curr<<" ";
            curr=curr*(i-j)/(j+1);
        }
        cout<<endl;
    }
}