#include<iostream>
using namespace std;
int main(){
    int n,ld=0,sum=0,rev=0;
    cout<<"enter the number";
    cin>>n;
    while(n>0){
        ld=n%10;
        rev=rev*10+ld;
        sum=sum+ld;
        n=n/10;
    }
    cout<<"the sum and reverse of the number is:"<<sum <<endl<<rev;
}