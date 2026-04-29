// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter number of rows";
//     cin>>n;
//     for(int k=1;k<=n;k++){
//      for(int i=1;i<=n-k;i++){
//         cout<<" ";
//      }
//      //odd star triangle
//     for(int j=1;j<=2*k-1;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// }



#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows";
    cin>>n;
    int nst=1;
    int nsp=n-1;
    for(int k=1;k<=n;k++){
     for(int i=1;i<=nsp;i++){
        cout<<" ";
     }
        nsp--;
    for(int j=1;j<=nst;j++){
        cout<<"*";
    }
        nst+=2;
    cout<<endl;
}
}