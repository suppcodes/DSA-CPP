#include<iostream>
#include<vector>
using namespace std;
int main(){
    int NumRows;
    cout<<"enter number of rows \n";
    cin>>NumRows;
    vector< vector<int> > v;
    for(int i=0;i<NumRows;i++){
        vector <int> a(i);
        v.push_back(a);
    }
    for(int i=1;i<=NumRows;i++){
        for(int j=1;j<=i;j++){
            if(j==0 || j==i){
               v[i][j]=1;
            }
            else{
                v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
        cout<<endl;
    }
    for(int i=1;i<NumRows;i++){
        for(int j=1;j<i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}