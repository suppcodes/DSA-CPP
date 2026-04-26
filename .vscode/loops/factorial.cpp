// #include<iostream>
// using namespace std;
// int main(){
//     int i,fact,n;
//     cout<<"enter number you want to get factorial";
//     cin>>n;
//     fact=1;
//    for(i=1;i<=n;i++){
//     fact=fact*i;
//     cout<<"factorial of"<<" "<<i <<"is" <<fact <<"\n";
//    }
   
// }


#include<iostream>
using namespace std;
int main(){
    int n,i,fact;
    cout<<"enter the number";
    cin>>n;
    fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    cout<<i<<" "<<fact<<endl;
    }
}