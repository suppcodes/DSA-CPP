#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter rows";
    cin>>m;
    int n;
    cout<<"enter columns";
    cin>>n;
    int a[m][n];
    cout<<"enter elements of array";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"the array is \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"the waved array is \n";
    for(int j=0;j<m;j++){
        if(j%2==0){
            for(int i=0;i<n;i++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int i=n-1;i>=0;i--){
                cout<<a[i][j]<<" ";
            }
        }
    }
}