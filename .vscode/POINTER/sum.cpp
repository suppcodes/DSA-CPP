// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout<<"enter two numbera \n";
//     cin>>x>>y;
//     int* p=&x;
//     int* q=&y;
//     int sum =(*p+*q);
//     cout<<"sum ="<<sum;
// }

#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter two numbera \n";
    int* p=&x;
    int* q=&y;
    cin>>*p>>*q;
    int sum =(*p+*q);
    cout<<"sum ="<<sum;
}