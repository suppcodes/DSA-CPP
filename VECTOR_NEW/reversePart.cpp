#include<iostream>
#include<vector>
using namespace std;
void partReverse(vector<int> &v,int l,int m){
    int n,h,k;
    h=l;
    k=m;
    n=v.size();
    // cout<<"\nenetr the indeces part you want to reverse\n";
    // cin>>h>>k;
    for(int i=h,j=k;i<k,j>=h;i++,j--){
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
//     int h,k;
//     cout<<"\nenetr the indeces part you want to reverse\n";
//     cin>>h>>k;
//     for(int i=h,j=k;i<k,j>=h;i++,j--){
//         if(i!=j && i<j){
//             int temp=v[i];
//             v[i]=v[j];
//             v[j]=temp;
//         }
//     }
//      cout<<"\nthe elements of vector v after reverse\n";
//      for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
// }
partReverse(v,2,6);
partReverse(v,3,5);
}