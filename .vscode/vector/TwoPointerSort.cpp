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
    int i=0,j=n-1;
    while(i<j){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
       else if(v[i]==1&&v[j]==0){
             v[i]=0;
             v[j]=1;
        i++;
        j--;
        }
    } 
    display(v,n);

}