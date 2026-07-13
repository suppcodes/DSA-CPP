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
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
    }
    cout<<"\n number of vowels in the string is "<<count;
}