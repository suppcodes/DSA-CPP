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
    cout<<"enter the number you want to compare\n";
    cin>>x;
    int count=0;
    for(i=0;i<=n-1;i++){
    if(a[i]>x){ 
        count++;
    }
}
    cout<<"total number greater than x is  "<<count;

}