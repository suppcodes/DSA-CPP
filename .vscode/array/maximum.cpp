#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array";
    for(i=0;i<=n-1;i++){
       cin>>arr[i];
    }
    int max=arr[0];
    for(i=0;i<=n-1;i++){
        if(max<arr[i])
        max=arr[i];
    }
    cout<<"the maximum element of the array is"<<max;
}