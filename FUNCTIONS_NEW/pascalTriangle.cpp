#include<iostream>
using namespace std;
int fact(int a){
    int j=1;
    for(int i=1;i<=a;i++){
        j=j*i;
    }
    return j;
}
int combination(int n,int r){
    int c=fact(n)/(fact(r)*fact(n-r));
    return c;
}
int main(){
    int n;
    cout<<"enter numaber of lines";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}