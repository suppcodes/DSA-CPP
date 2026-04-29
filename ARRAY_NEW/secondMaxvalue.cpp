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
    int secondmax=max;
   for(int i=0;i<=n-1;i++){
    if(max<a[i]){ 
        secondmax=max;
        max=a[i];
    }
   }
   cout<<"max element is "<<max<<endl;
   cout<<"secondmax element is "<<secondmax;
}

//ANOTHER LOGIC
//if(a[i]!=max && secondmax<a[i]) secondmax=a[i]