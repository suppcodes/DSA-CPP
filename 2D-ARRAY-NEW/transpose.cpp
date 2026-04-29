#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cout<<"enter number of row and column of  array\n";
    cin>>n>>m;
    int a[n][m];
    cout<<"enter elements of array\n";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
     cout<<"elements of array are\n";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
     int b[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            b[i][j]=a[j][i];
        }
        cout<<endl;
    }
     cout<<"elements of transposed array are\n";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}