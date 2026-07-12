#include<iostream>
#include<vector>
using namespace std;
int main(){
    int NumRows,index;
    cout<<"enter number of rows \n";
    cin>>NumRows;
    vector< vector<int> > v;
    for(int i=0;i<NumRows;i++){
        vector <int> a(i+1);
        v.push_back(a);
    }
    for(int i=0;i<NumRows;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
               v[i][j]=1;
            }
            else{
                v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
    }

   cout<<"\nenter the row you want\n";
   cin>>index;
   cout<<a(index+1);
}