#include<iostream>>
using namespace std;
int gcd(int a,int b){
    int z;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            z=i;
        }
    }
    return z;
}
int GCD(int a,int b){
    int z;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            z=i;
            break;
        }
    }
    return z;
}
int main(){
   cout<< gcd(24,36);

}