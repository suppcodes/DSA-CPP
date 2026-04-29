#include<iostream>
using namespace std;
int main(){
    int a,b,sum;
    cout<<"enter two numbers";
    cin>>a>>b;
    int* p=&a;
    int* q=&b;
    sum=*p+*q;
    cout<<"sum of the number is :"<<sum;
}