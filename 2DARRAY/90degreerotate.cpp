#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter row and column";
    cin>>n;
    cout<<"enter elements of the array"<<endl;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"the array is"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
        int temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
       }
    }
    cout<<"the transposed array is"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int k=0;k<n;k++){
        int i=0;
        int j=n-1;
        while(i<=j){
            int temp=arr[k][i];
            arr[k][i]=arr[k][j];
            arr[k][j]=temp;
            i++;
            j--;
        }
    }
    cout<<"the reversed array is"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}