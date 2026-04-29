#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,x;
    cout<<"enter size of the vector\n";
    cin>>n;
    vector<int> v(n);
    cout<<"enter the elements of vector\n";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"enter the number ,you want to cheack the occurence\n";
    cin>>x;
    int y=-1;
    for(int i=0;i<n;i++){
        if(v[i]==x) y=i;
    }
    cout<<"the last of the number is  "<<y;
}

// ANOTHER LOGIC
// for(int i=n-1;i>=0;i--){
   //if(v[i]==x) y=i;
// }