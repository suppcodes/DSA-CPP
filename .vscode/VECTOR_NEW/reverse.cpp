#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size of the vector\n";
    cin>>n;
    vector<int> v(n);
    cout<<"enter the elements of vector\n";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"the elements of vector v before reverse\n";
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    for(int i=0,j=n-1;i<n,j>=0;i++,j--){
        if(i!=j && i<j){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
        }
    }
    cout<<"\nthe elements of vector v after reverse\n";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}