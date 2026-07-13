#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"\n enter the string";
    getline(cin,str);
    cout<<str;
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(i%2==0){
            str[i]='a';
        }
    }
    cout<<"\n "<<str;
}