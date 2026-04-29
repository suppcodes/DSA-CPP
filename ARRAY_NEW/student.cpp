#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of students \n";
    cin>>n;
    int arr[n];
    cout<<"enter the marks";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        if(arr[i]<35){
            cout<<"roll no. is"<<i<<endl;
        }
    }
}