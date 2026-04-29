#include<iostream>
using namespace std;
int main(){
    int n,sum =0,lastdigit=0;
    cout<<"enter a number";
    cin>>n;
    while(n>0){
       lastdigit =n%10;
        sum=sum+lastdigit;
        n/=10;
    }
    cout<<"the sum of the number :"<<sum;
}