#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int> &v1,vector<int> &v2){
    int n=v1.size();
    int m=v2.size();
    vector<int> v(m+n);
    int i=0,j=0,k=0;
    while(v1[i]<n && v2[j]<m){
        if(v[i]<v[j]){
            v[k]=v[i];
            i++;
        } 
        if(v[j]<v[i]){
            v[k]=v[j];
            j++;
        }
        k++;
    }
    if(v[i]==n){
        while(j<m){
            
            else
            v[k]=v[j];
            j++;
            k++;
        }
    }
    if(v[j]==m){
        while(i<n){
            
            else
            v[k]=v[i];
            i++;
            k++;
        }
    }
    return v;
}
void display(vector<int> &v,int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    vector<int> v1;
    int n;
    cout<<"enter size of v1";
    cin>>n;
    cout<<"\nenter elements of v1";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v1.push_back(q);
    }
    display(v1,n);
    vector<int> v2;
    int m;
    cout<<"enter size of v2 ";
    cin>>m;
    cout<<" \n enter elements of v2";
    for(int i=0;i<m;i++){
        int q;
        cin>>q;
        v2.push_back(q);
    }
    display(v2,m);
    vector<int> v=merge(v1,v2);
    display(v,m+n);
}