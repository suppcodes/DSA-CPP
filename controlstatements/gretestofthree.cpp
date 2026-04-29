// #include<iostream>
// using namespace std;
// int main(){
//     int x, y ,z;
//     cout<<"enter three numbers";
//     cin>>x>>y>>z;
//     if(x>y && x>z){
//         cout<<"a is greatest";
//     }
//      else if(y>x && y>z){
//         cout<<"y is greatest";
//      }
//      else{
//         cout<<"z is greatest";
//      }
// }


#include<isostream>
using namespace std;
int main(){
   int x,y,z;
   cout<<"enter three numbers";
   cout<<x<<y<<z;
   if(x>y){
      if(x>z){
         cout<<"x is greatest";
      }
      else{
         cout<<""
      }
   }
   
}