#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int> &v){
    int n=v.size();
     int z=0,o=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) z++;
        if(v[i]==1)  o++;
    }
    for(int i=0;i<n;i++){
        if(i<z) v[i]=0;
        else v[i]=1;
    }
    cout<<"\nvector after sortin\n";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
void sort2(vector<int> &v){
    int n=v.size();
    int i=0,j=n-1;
        while(i<j){
            if(v[i]==0) i++;
            else if(v[j]==1) j--;
            else if(v[i]==1 && v[j]==0){
                int temp=v[i];
                v[i]=v[j];
                v[j]=temp;
                i++;
                j--;
            }
        }
    cout<<"\nvector after sorting\n";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
void nANDpSORT(vector<int> &v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]<0) i++;
        else if(v[j]>=0) j--;
        else if(v[i]>=0 && v[j]<0){
            int temp =v[i];
            v[i]=v[j];
            v[j]=temp;
        }
    }
    cout<<"\nvector after sorting\n";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter size of vector\n";
    cin>>n;
    cout<<"enter number of elements\n";
    vector<int> v(n);
    for(int i=0;i<=n-1;i++){
        cin>>v[i];
    }
    cout<<"\nvector before sorting\n";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    nANDpSORT(v);
}