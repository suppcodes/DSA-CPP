#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter size of the vector\n";
    cin>>n;
    vector<int> v(n);
    cout<<"enter the elements of vector\n";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"the elements of vector v\n";
     for(i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    vector<int> g(n);
    for(i=0;i<n;i++){
        j=n-1-i;
        g[j]=v[i];
    }
    cout<<"\nthe elements of vector g\n";
     for(j=0;j<n;j++){
        cout<<g[j]<<" ";
    }
}