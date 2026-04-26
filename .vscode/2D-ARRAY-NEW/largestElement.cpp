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
    int max=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(max<a[i][j]) max=a[i][j];
        }
    }
    cout<<"\nthe max element in the array is \n"<<max;
    int sum=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            sum=sum+a[i][j];
        }
    }
    cout<<"\nthe sum element in the array is \n"<<sum;
}