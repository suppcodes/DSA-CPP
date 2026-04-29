#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the element of the array";
    for(i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter the number you want to compare";
    cin>>x;
    int count=0;
    for(i=0;i<=n-1;i++){
        if(arr[i]>x)
        count++;
    }
    cout<<"the total number greater than max"<<count;
}