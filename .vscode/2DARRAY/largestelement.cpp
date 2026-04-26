#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter column"<<endl;
    cin>>m;
    cout<<"enter row";
    cin>>n;
    int arr[n][m];
    cout<<"enter elements of the array"<<endl;
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
    int max=arr[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max<arr[i][j]) max=arr[i][j];
        }
    }
    cout<<"\n the largest element is"<<max;
}