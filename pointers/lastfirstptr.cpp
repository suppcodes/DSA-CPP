// #include<iostream>
// using namespace std;
// void find(int n,int *p1,int *p2){
//     *p2=n%10;
//     while(n<9){
//         n=n/10;
// }
// *p1=n;
// return;
// }
// int main(){
//     int n,ft,ld;
//     cout<<"enter the number";
//     cin>>n;
//     int *p1=&ft;
//     int *p2=&ld;
//     find(n,p1,p2);
//     cout<<"the first digit is "<< ft<<" "<<"the last digit is "<<ld;
// }

#include<iostream>
using namespace std;
void find(int n,int* x,int* y){
    *x=n%10;
    while(n>9){
        n=n/10;
    }
    *y=n;
}
int main(){
    int n,ld,fd; 
    cout<<"enter any number";
    cin>>n;
    int* p=&ld;
    int* q=&fd;
    find(n,p,q);
    cout<<ld<<" "<<fd;
} 