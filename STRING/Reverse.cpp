#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter the string of even length  ";
    getline(cin,str);
    cout<<"\n string before reverse  "<<str;
    int s=(str.length())/2;
    reverse(str.begin(),str.end()-s);
    //reverse(str.begin(),str.begin()+s);
    cout<<"\n string after reverse  "<<str;
}