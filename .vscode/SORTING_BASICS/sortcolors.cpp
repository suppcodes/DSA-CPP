#include<iostream>
#include<vector>
using namespace std;
void sort2(vector<int> &v){
    int n=v.size();
    int noo=0;
    int noz=0;
    int notw=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) noz++;
        if(v[i]==1) noo++;
        if(v[i]==2) notw++;
    }
    for(int i=0;i<n;i++){
        if(i<noz) v[i]=0;
        else if(i<(noz+noo)) v[i]=1;
        else v[i]=2;
    }
    cout<<"\nvector after sortin\n";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
//DUTCH FLAG ALGORITHM
void sort(vector<int> &v){
    int n=v.size();
    int lo=0,mid=0,hi=n-1;
    while(mid<=hi){
        if(v[mid]==2){
            int temp=v[mid];
            v[mid]=v[hi];
            v[hi]=temp;
            hi--;
        }
        else if(v[mid]==0){
            int temp=v[lo];
            v[lo]=v[mid];
            v[mid]=temp;
            lo++;
            mid++;
        }
         else if(v[mid]==1){
            mid++;
        }
    }
    cout<<"\nvector after sortin\n";
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
    sort2(v);
}