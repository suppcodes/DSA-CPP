#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size\n";
    cin>>n;
   cout<<"enter elements";
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<" elements are \n";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}