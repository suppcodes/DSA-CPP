#include<iostream>
using namespace std;
void fact(int a){
    int j=1;
    for(int i=1;i<=a;i++){
        j=j*i;
        cout<<"factorial of "<<i<<"is"<<j<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    fact(n);
}