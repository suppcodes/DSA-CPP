#include<iostream>
using namespace std;
void swap(int a,int b){
    int x;
    x=a;
    a=b;
    b=x;
    cout <<"a is "<<a<<"  "<<"b is "<<b;
}
void swapBetter(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    cout <<"a is "<<a<<"  "<<"b is "<<b;
}

int main(){
    int a,b;
    cout<<"enter the numbers you want swap";
    cin>>a>>b;
    swap(a,b);
    swapBetter(a,b);
}