#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    cout<<"enter first string\n";
    cin>>s;
    string t;
    getline(cin,t);
     cout<<"enter second string\n";
     cin>>t;
     sort(s.begin(),s.end());
     sort(t.begin(),t.end());
     if(s==t){
        cout<<"yes";
     }
     else cout<<"no";
}