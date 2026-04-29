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
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
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