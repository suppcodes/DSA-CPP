#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter the square matrix\n";
    cin>>n;
    int a[n][n];
    cout<<"enter elements of array\n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
     cout<<"elements of array are\n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
           int temp=a[i][j];
           a[i][j]=a[j][i];
           a[j][i]=temp;
        }
        cout<<endl;
    }
    for(int k=0;k<n;k++){
        int i=0;
        int j=n-1;
        while(i<=j){
             int temp=a[k][i];
           a[k][i]=a[k][j];
           a[k][j]=temp;
           i++;
           j--;
        }
    }
    cout<<"\nthe rotated array is \n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}