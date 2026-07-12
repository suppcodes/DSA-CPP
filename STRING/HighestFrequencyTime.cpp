#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter the string \n";
    cin>>s;
    int max=0;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int count =1;
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j]){
                count++;

            }
        }
        if(count>max) max=count;
    }
    cout<<max;
}