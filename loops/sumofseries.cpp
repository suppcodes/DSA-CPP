#include<iostream>
using namespace std;
int main(){
    int i,sum,n;
    cout<<"enter a number";
    cin>>n;
    sum=0;
    for(i=1;i<=n;i++){
        if(i%2==0) sum=sum-i;
        else sum=sum+i;
    }
    cout<<sum;
}