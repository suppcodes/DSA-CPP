#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the size of array";
    cin>>n; 
    int arr[n];
    cout<<"enter the elements of array";
    for( i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter the nuber you want to search";
    cin>>x;
    bool flag=false;
    for( i=0;i<=n-1;i++){
        if(arr[i]==x){
        flag=true;
        break;
        }
    }
    if(flag==true){
        cout<<"that number is at"<<" "<<i+1;
    }
    else cout<<"that number is not available in the array";
}
