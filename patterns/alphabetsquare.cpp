#include<iostream>
using namespace std;
int main(){
    int i,j,n,a;
    char ch;
    cout<<"enter nuber of lines";
    cin>>n;
    for(i=1;i<=n;i++){
        a=65;
        for(j=1;j<=n;j++){
    ch=(char)a;
        cout<<ch;
        a++;
        }
        cout<<"\n";
    }
}