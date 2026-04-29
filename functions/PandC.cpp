// #include<iostream>
// using namespace std;
// int fact(int x){
//     int fact,i;
//     fact=1;
//     for(i=1;i<=x;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int ncr(int n, int r){
//     int ncr;
//     ncr= fact(n)/(fact(r)*fact(n-r));
//     return ncr;
// }
// int npr(int n,int r){
//     int npr;
//     npr=fact(n)/fact(r);
//     return npr;
// }
// int main(){
//     int n,r;
//     cout<<"enter n";
//     cin>>n;
//     cout<<"enter r";
//     cin>>r;
//     cout<<ncr(n,r)<<"\n"<<npr(n,r);
// }



#include<iostream>
using namespace std;
int fact(int x){
    int fact=1;
   for(int i=1;i<=x;i++){
    fact=fact*i;
   }
   return fact;
}
int combination(int x,int y){
    int ncr=fact(x)/(fact(y)*fact(x-y));
    return ncr;
}
int permutation(int n,int r){
    int npr=fact(n)/fact(r);
    return npr;
}
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    int r;
    cout<<"enter r";
    cin>>r;
    cout<<"the combination is :"<<combination(n,r);
    cout<<endl<<"the permutation is :"<<permutation(n,r);
}