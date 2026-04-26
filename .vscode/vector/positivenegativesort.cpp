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
        if(v[i]>=0) i++;
        if(v[j]<0) j--;
       else if(v[i]<0&&v[j]>=0){
             int temp=v[i];
             v[i]=v[j];
             v[j]=temp;
        i++;
        j--;
        }
    } 
    display(v,n);

}