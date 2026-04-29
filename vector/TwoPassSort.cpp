#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v,int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    vector<int>v;
    cout<<"enter size";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v,n);
    int noz=0,noo=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) noz++;
        else noo++;
    }
    for(int i=0;i<n;i++){
        if(i<noz) v[i]=0;
        else v[i]=1;
    }
    display(v,n);
}