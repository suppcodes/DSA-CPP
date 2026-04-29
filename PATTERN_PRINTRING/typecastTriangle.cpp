#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows";
    cin>>n;
    for(int i=1;i<=n;i++){
        int a=65;
        for(int j=1;j<=n+1-i;j++){
            char ch=(char)a;
            cout<<ch;
            a++;
        }
        cout<<endl;
    }
}