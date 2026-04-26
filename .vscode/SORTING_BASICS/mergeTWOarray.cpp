#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n1,n2;
    cout<<"\nenter the size of arrays\n";
    cin>>n1>>n2;
    vector<int> v1(n1);
    vector<int>  v2(n2);
    int n3=v1.size()+v2.size();
    vector<int> v3(n3);
    cout<<"\nenter elements of vector 1\n";
    for(int i=0;i<n1;i++){
        cin>>v1[i];
    }
    cout<<"\nenter elements of vector 2\n";
    for(int i=0;i<n2;i++){
        cin>>v2[i];
    }
    int i=0,j=0 ,k=0;
    while(i<=n1 && j <=n2){
        if(v1[i]>v2[j]){ 
            v3[k]=v2[j];
            j++,k++;
    }
    else if(v1[i]<v2[j]){ 
            v3[k]=v1[i];
            i++,k++;
    }
    else if(v1[i]==v2[j]){
        v3[k]=v1[i];
        i++,k++;
        v3[k]=v2[j];
        j++,k++;
    }
}
    while(i<=n1){
        v3[k]=v1[i];
        i++,k++;
    }
    while(j<=n2){
        v3[k]=v2[j];
        j++,k++;
    }
    cout<<"\nvector 1\n";
    for(int i=0;i<n1;i++){
        cout<<v1[i]<<" ";
    }
    cout<<"\nvector 2\n";
    for(int i=0;i<n2;i++){
        cout<<v2[i]<<" ";
    }
    cout<<"\nvector 3\n";
    for(int i=0;i<n3;i++){
        cout<<v3[i]<<" ";
    }
}