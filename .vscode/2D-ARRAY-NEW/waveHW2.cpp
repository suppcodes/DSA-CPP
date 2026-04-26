#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cout<<"enter number of row and column\n";
    cin>>n>>m;
    int a[n][m];
    cout<<"enter elements of array\n";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"the array is\n";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int j=0;j<m;j++){
       if(j%2==0){
        for(i=0;i<n;i++){
            cout<<a[i][j]<<" ";
        }
       }
       else{
        for(int i=m-1;i>=0;i--){
            cout<<a[i][j]<<" ";
        }
       }
    }
}