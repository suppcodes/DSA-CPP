#include<iostream>
using namespace std;
class m{
    int n;
    public:
    m(){}
    int operator -(int n){
        n=-n;
        return n;
    }
    void display(){
        cout<<"the integer is "<<n<<endl;
    }
};
int main(){
    int x;
    cout<<"enter number"<<endl;
    cin>>x;
    m num;
    num.operator-(x);
    num.display();
}