#include<iostream>
using namespace std;
int main(){
    int n,sum=0,ld=0;
    cout<<"enter a number";
    cin>>n;
    while(n>0){
        ld=n%10;
        if(ld%2==0)
        sum=sum+ld;
        n=n/10;
    }
    cout<<"sum of even digit is :"<<sum;
}