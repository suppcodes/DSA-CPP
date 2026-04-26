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
    for(int i=0;i<n;i++){
       if(i%2==0){
        for(j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
       }
       else{
        for(int j=n-1;j>=0;j--){
            cout<<a[i][j]<<" ";
        }
       }
    }
}