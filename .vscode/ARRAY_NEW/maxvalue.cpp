#include<iostream>
using namespace std;
int main (){
    int n,x,i; 
    cout<<"enter size of of array\n";
    cin>>n;
    int a[n];
    cout<<"enter elements of array\n";
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
    int max=a[0];
   for(int i=0;i<=n-1;i++){
    if(max<a[i]) max=a[i];
   }
   cout<<"max element is "<<max;
}