#include<iostream>
using namespace std;
class absolute{
    
    public:
    
    int abs(int a){
        if(a<0) a=-a;
        if(a==0 || a>0) a=a;
        return a;
    }
    float abs(float b){
        if(b<0) b=-b;
        if(b==0 || b>0) b=b;
        return b;
    }
};
int main(){
   int n,m;
   cout<<"enter integer and float";
   cin>>n>>m;
   absolute num;
    cout<<"the absolute value of integer is "<<num.abs(n)<<endl;
    cout<<"the absolute value of float is "<<num.abs(m)<<endl;
    
}