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
    cout<<"\n the first array is";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int brr[n][m];
    cout<<"enter elements of second array"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>brr[i][j];
        }
    }
    cout<<"\n the second array is";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    int crr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            crr[i][j]=arr[i][j]+brr[i][j];
        }
    }
    cout<<"the final array is\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
}