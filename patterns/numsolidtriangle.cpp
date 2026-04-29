// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     cout<<"enter number of lines";
//     cin>>n;
//      for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             cout<<j;
            
//         }
//         cout<<"\n";
//      }
// }

#include<iostream>
using namespace std;
int main(){
    int i,j,n,a;
    cout<<"enter number of lines";
    cin>>n;
     for(i=1;i<=n;i++){
         a=1;
        for(j=1;j<=i;j++){
            cout<<a;
            a=a+2;
            
        }
        cout<<"\n";
     }
}
