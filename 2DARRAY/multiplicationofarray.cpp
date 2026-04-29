#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter column";
    cin>>n;
    int m;
    cout<<"\n  enter row";
    cin>>m;
    int a[m][n];
    cout<<"\nenter elements of first array";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"\n the first array is ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    int p;
    cout<<" enter rows";
    cin>>p;
    int q;
    cout<<"\n  enter column";
    cin>>q;
    int b[p][q];
    cout<<"\nenter elements of second array";
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
    cout<<"\n the second array is ";
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    if(n==p){
        int c[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                c[i][j]=0;
                for(int k=0;k<p;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        cout<<"\n the multiplied array is ";
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else{
        cout<<"\n cannot be multiplied";
    }
}