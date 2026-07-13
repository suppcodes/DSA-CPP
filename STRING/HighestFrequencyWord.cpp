#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

//MORE TIME COMPLEXITY

// int main(){
//     string str;
//     cout<<"enter the string\n";
//     getline(cin,str);
//     int max=0;
//     for(int i=0;i<str.length()-1;i++){
//         int count=0;
//         for(int j=i;j<str.length();j++){
//             if(str[i]==str[j]) count++;
//         }
//         if(max<count) max=count;
//     }

//      for(int i=0;i<str.length()-1;i++){
//         char ch=str[i];
//         int count=0;
//         for(int j=i;j<str.length();j++){
//             if(str[i]==str[j]) count++;
//         }
//         if(count==max) {
//             cout<<ch<<" "<<max<<endl;
//         }
//     }
// }

//BETTER METHOD

int main(){
    string s;
    cout<<"enter thr string"<<endl;
    getline(cin,s);
    vector<int> v(26,0);
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int ascii=int(ch);
        v[ascii-97]++;
    }
    int mx=0;
    for(int i=0;i<26;i++){
        if(mx<v[i]) mx=v[i];
    }
    for(int i=0;i<26;i++){
        if(mx==v[i]){
            int ascii=i+97;
            char ch=char(ascii);
            cout<<ch<<" "<<mx<<endl;
        }
    }
}