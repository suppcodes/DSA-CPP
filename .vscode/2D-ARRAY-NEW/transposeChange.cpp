#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter the square matrix\n";
    cin>>n;
    int a[n][n];
    cout<<"enter elements of array\n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
     cout<<"elements of array are\n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
           int temp=a[i][j];
           a[i][j]=a[j][i];
           a[j][i]=temp;
        }
        cout<<endl;
    }
    cout<<"\nthe transposed array are \n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}