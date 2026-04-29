//by two pass method
// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int> &v,int n){
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     return;
// }
// int main(){
//     vector<int>v;
//     cout<<"enter size";
//     int n;
//     cin>>n;
//     cout<<"enter the elements";
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     display(v,n);
//     int noz=0,noo=0,notw=0;
//     for(int i=0;i<n;i++){
//         if(v[i]==0) noz++;
//         else if(v[i]==1)noo++;
//         else notw++;
//     }
//     for(int i=0;i<n;i++){
//         if(i<noz) v[i]=0;
//         else if(i<noo+noz) v[i]=1;
//         else v[i]=2;
//     }
//     display(v,n);
// }

//BY ONE PASS METHOD ***

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
    cout<<"enter the elements";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v,n);
    int lo=0,mid=0,hi=n-1;
    while(mid<hi){
        if(v[mid]==2){
            int temp=v[mid];
            v[mid]=v[hi];
            v[hi]=temp;
            hi--;
        }
        else if(v[mid]==0){
            int temp=v[mid];
            v[mid]=v[lo];
            v[lo]=temp;
            lo++;
            mid++;
        }
        else if(v[mid]==1) mid++;
    }
    display(v,n);
}
