// #include<iostream>
// using namespace std;
// int hcf(int x,int y){
//     int i,a;
//     for(i=1;i<=min(x,y);i++){
//         if(x%i==0 && y%i==0)
//         a=i;
//     }
//     return a;
// }
// int main(){
//     int n,m;
//     cout<<"enter the numbers";
//     cin>>n>>m;
//     cout<<"hcf is"<<" "<<hcf(m,n);
// }

#include<iostream>
using namespace std;
int hcf(int n,int m){
    int hcf=1;
    for(int i=min(n,m);i>1;i--){
        if(n%i==0 && m%i==0){
            hcf=i;
            break;
        }
    }
    return hcf;
}
int main(){
    int n,m;
    cout<<"enter two numbers";
    cin>>n>>m;
    cout<<"the hcf is :"<<hcf(n,m);
}