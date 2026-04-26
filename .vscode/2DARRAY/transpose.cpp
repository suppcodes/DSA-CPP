#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter row";
    cin>>n;
    cout<<"enter column"<<endl;
    cin>>m;
    cout<<"enter elements of the array"<<endl;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"the array is"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int brr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            brr[i][j]=arr[j][i];
        }
    }
    cout<<"the transposed array is \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}