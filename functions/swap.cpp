#include<iostream>
using namespace std;
int swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    return x,y;
}
int main(){
    int a,b;
    cout<<"enter the numbers ";
    cin>>a>>b;
    cout<<swap(a,b);
}