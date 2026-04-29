#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"enter the selling price";
    cin>>sp;
    cout<<"enter the cost price";
    cin>>cp;
    if(cp>sp){
        cout<<"there is loss of:"<<cp-sp;
    }
    else{
        cout<<"there is profit of :"<<sp-cp;
    }

}