// #include<iostream>
// using namespace std;
// int fact( int x){
//     int i,f;
//     f=1;
//     for(i=1;i<=x;i++){
//         f=f*i;
//     }
//     return f;
// }
// int ncr(int n,int r){
//     int ncr;
//     ncr=fact(n)/(fact(r)*fact(n-r));
//     return ncr;
// }
// int main(){
//     int i,j,n;
//     cout<<"enter number of lines";
//     cin>>n;
//     for(i=0;i<=n;i++){
//         for(j=0;j<=i;j++){
//             cout<<ncr(i,j)<<" ";
//         }
//         cout<<"\n";
//     }
// }


#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
    return f;
}
int combination(int i,int j){
   int icj = fact(i)/(fact(j)*fact(i-j));
return icj;
}
int main(){
    int i,j,n;
    cout<<"enter number of lines";
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++) 
        cout<<combination(i,j)<<" ";
        cout<<endl;
    }
}