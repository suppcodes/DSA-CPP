#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter the string of even length  ";
    getline(cin,str);
    int n=(str.length())/2;
    cout<<"\n the substring is \n";
    cout<<str.substr(n);
}