#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the number of line";
    cin>>m;
    int n=m-1;
    int nsp=1;
    for(int h=1;h<=2*m-1;h++){
    cout<<h;
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n-i+1;j++){
            cout<<a;
            a++;
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
            a++;
        }
        nsp+=2;
        for(int j=1;j<=n-i+1;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}