#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter rows";
    cin>>m;
    int n;
    cout<<"enter columns";
    cin>>n;
    int a[m][n];
    cout<<"enter elements of array";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"the array is \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int minr=0,minc=0;
    int maxr=m-1,maxc=n-1;
    while(minr<=maxr && minc<=maxc){
    for(int j=minc;j<=maxc;j++){
        cout<<a[minr][j]<<" ";
    }
    minr++;
    if(minr>maxr || minc>maxc) break;
    for(int i=minr;i<=maxr;i++){
        cout<<a[i][maxc]<<" ";
    }
    maxc--;
    if(minr>maxr || minc>maxc) break;
    for(int j=maxc;j>=minc;j--){
        cout<<a[maxr][j]<<" ";
    }
    maxr--;
    if(minr>maxr || minc>maxc) break;
    for(int i=maxr;i>=minr;i--){
        cout<<a[i][minc]<<" ";
    }
    minc++;
}
}