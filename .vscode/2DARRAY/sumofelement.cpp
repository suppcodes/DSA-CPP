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
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum=arr[i][j]+sum;
        }
    }
    cout<<"\n the sum of elements is"<<sum;
}