
#include<iostream>
using namespace std;
int main(){
    int n,ld=0,rev=0;
    cout<<"enter the number";
    cin>>n;
    while(n>0){
        ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    cout<<"the reversed number is :"<<rev;
}