#include<iostream>
using namespace std;
int main(){
    int n,sum,a,i,b;
    cout<<"enter a number";
    cin>>n;
    b=1;
    a=1;
    sum=0;
    for(i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<b;
}
