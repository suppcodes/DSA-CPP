#include<iostream>
using namespace std;
class complex{
    float real;
    float imag;
    public:
    complex(){}
    complex(double r,double i){
        real=r;imag=i;
    }
    void display(){
        cout<<real<<"+i"<<imag;
    }
    complex operator +(complex &c){
        complex ans;
        ans.real=real+c.real;
        ans.imag=imag+c.imag;
        return ans;
    }

};
int main(){
    complex c1(3,4);
    complex c2(5,6);
    complex c3= c1+c2;
    c3.display(); 
}