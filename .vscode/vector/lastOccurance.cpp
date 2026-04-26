// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n,x;
//     cout<<"enter size of vector";
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<=n;i++){
//         cin>>x;
//         v.push_back(x);
//     }
//     int search,index=-1,i;
//     cout<<"\n enter the number you want to find";
//     cin>>search;
//     for(i=0;i<=n;i++){
//         if(v[i]==search) index=i;
//     }
//     cout<<"\n"<<index;
// }   


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     v.push_back(9);
//     v.push_back(8);
//     v.push_back(3);
//     v.push_back(7);
//     v.push_back(8);
//     int x=7;
//     int index=-1;
//     for(int i=0;i<v.size();i++){
//         if(v[i]==x) index=i;
//     }
//     cout<<"\n"<<index;
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(8);
    v.push_back(3);
    v.push_back(7);
    v.push_back(8);
    int x=9;
    int index=-1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){ index=i;
        break;
        }

    }
    cout<<"\n"<<index;
}