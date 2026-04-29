// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n,i,j;
//     cout<<"enter the size";
//     cin>>n;
//     vector<int> v1;
//     cout<<"\n enter the elements";
//     for( i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v1.push_back(q);
//     }
//     for( i=0;i<n;i++){
//         cout<<v1[i]<<" ";
//     }
//     vector<int> v2;
//     for(j=0;j<n;j++){
        
//     }
// }/


// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>&a){ 
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int> v1;
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);
//     v1.push_back(4);
//     v1.push_back(5);
//     display(v1);
//     vector<int> v2(v1.size());
//     for(int i=0;i<v2.size();i++){
//         v2[i]=v1[v1.size()-1-i];
//     }
//     display(v2);
// }


// //reverse without an extra array using while loop
// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>&a){ 
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     display(v);
//     int i=0,j=v.size()-1;
//     while(i<=j){
//         int temp=v[i];
//         v[i]=v[j];
//         v[j]=temp;
//         i++;
//         j--;
//     }
//     display(v);
// }

//reverse without an extra array using for loop
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){ 
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    display(v);
    for(int i=0,j=v.size()-1;i<=j;i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    display(v);
}