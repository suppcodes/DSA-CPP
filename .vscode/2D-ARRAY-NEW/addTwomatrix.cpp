#include<iostream>
using namespace std;
int main(){
    int i,j,n,m,p,q;
    cout<<"enter number of row and column of 1 array\n";
    cin>>n>>m;
    int a[n][m];
    cout<<"enter elements of array\n";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter number of row and column of 2 array\n";
    cin>>p>>q;
    int b[p][q];
    cout<<"enter elements of array\n";
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
    cout<<"the 1 array is\n";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"the 2 array is\n";
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    //ADDING ARRAY WITH CREATING NEW ARRAY


    if(n==p && m==q){
        int c[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                c[i][j]=a[i][j]+b[i][j];
            }
        }
    cout<<"the final array is\n";
    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}
else cout<<"addition is not possible";


//ADDING ARRAY WITHOUT CREATING A NEW ARRAY
 if(n==p && m==q){
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                b[i][j]=b[i][j]+a[i][j];
            }
        }
            cout<<"the final array is\n";
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}
else cout<<"addition is not possible";
}

    