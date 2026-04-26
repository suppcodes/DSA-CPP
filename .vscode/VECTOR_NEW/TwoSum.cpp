#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,x;
    cout<<"enter size of the vector\n";
    cin>>n;
    vector<int> v(n);
    cout<<"enter the elements of vector\n";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"enter the number you want check the doublet\n";
    cin>>x;
    for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
        if(v[i]+v[j]==x) cout<<"the doublets of "<<x<<" are ("<<i<<","<<j<<")"<<endl;
       }
    }
}