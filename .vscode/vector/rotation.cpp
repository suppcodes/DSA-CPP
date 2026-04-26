#include<iostream>
#include<vector>
using namespace std;
void reverse(int a,int b, vector<int>&x){
    int i=a;
    int j=b;
    while(i<=j){
        int temp=x[i];
        x[i]=x[j];
        x[j]=temp;
    }
    return;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<"enter rotaion\n";
    int k;
    cin>>k;
    int n=v.size();
    reverse(n-k-1,k,v);
    reverse(n-2)
}