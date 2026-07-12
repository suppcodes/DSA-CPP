#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array\n";
    cin>>n;
    int a[n];
    cout<<"enter the binary number\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x=1,sum=0;
    for(int i=n-1;i>=0;i--){
        sum=sum+(a[i]*x);
        x=x*2;
    }
    cout<<"the decimal number of corresponding binary is  "<<sum;
}