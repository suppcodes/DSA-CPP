#include<iostream>
using namespace std;
int main(){
    int arr[5],sum=0;
    cout<<"enter the numbers of array";
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=4;i++){
        sum=sum+arr[i];
    }
    cout<<"sum of is "<<" "<<sum;
}
