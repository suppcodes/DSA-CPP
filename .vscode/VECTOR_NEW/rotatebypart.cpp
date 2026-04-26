#include<iostream>
#include<vector>
using namespace std;
void partReverse(vector<int> &v,int l,int m){
    int n,h,k;
    h=l;
    k=m;
    n=v.size();
    for(int i=h,j=k;i<k,j>=h;i++,j--){
        if(i!=j && i<j){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
        }
    }
}
void reverse(vector<int> &v){
    int n=v.size();
    for(int i=0,j=n-1;i<n,j>=0;i++,j--){
        if(i!=j && i<j){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
        }
    }
}
void rotate(vector<int> &v,int k){
    int n=v.size();
    partReverse(v,0,n-k-1);
    partReverse(v,n-k,n-1);
    reverse(v);
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
    int k;
    cout<<"\nenter the number by you want to rotate the array\n";
    cin>>k;
    if(k>n) k=k%n;
    rotate(v,k);
}
     