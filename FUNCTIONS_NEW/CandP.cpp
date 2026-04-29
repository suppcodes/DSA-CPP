#include<iostream>
using namespace std;
int fact(int a){
    int j=1;
    for(int i=1;i<=a;i++){
        j=j*i;
    }
    return j;
}
int permutation(int n,int r){
    int p=fact(n)/fact(n-r);
    return p;
}
int combination(int n,int r){
    int c=fact(n)/(fact(r)*fact(n-r));
    return c;
}
int main(){
    int n ,r;
    cout<<"enter n and r";
    cin>>n>>r;
    cout<<"permutation of"<<n<<"and"<<r<<"is"<<permutation(n,r);
    cout<<endl;
     cout<<"combination of"<<n<<"and"<<r<<"is"<<combination(n,r);
}