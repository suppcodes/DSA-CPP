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
    cout<<"enter the number you want to search\n";
    cin>>x;
    bool flag=false;
    for(i=0;i<=n-1;i++){
    if(a[i]==x){ 
        flag=true;
        break;
    }
}
    if(flag==true) cout<<"the element is at "<< i<<"th index";
    else cout<<"not found";

}