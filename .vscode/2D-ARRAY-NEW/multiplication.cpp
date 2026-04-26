#include<iostream>
using namespace std;
int main(){
    int n,m,p,q;
    cout<<"enter the number of rows and column of first matrix \n";
    cin>>n>>m;
    cout<<"enter the number of rows and column of second matrix \n";
    cin>>p>>q;
    int a[n][m];
    cout<<"enter the elements of first matrix \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int b[p][q];
    cout<<"enter the elements of second matrix \n";
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
    if(m==p){
        int c[n][q];
        for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            c[i][j]=0;
            for(int k=0;k<m;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    cout<<"the  first matrix is \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<"the  second matrix is \n";
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<"the  final matrix is \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else cout<<"matrix cant be multiplied \n";

}