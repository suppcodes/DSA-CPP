#include<iostream>
using namespace std;
class book{
    public:
    char name;
    int price;
    int noOfpages;
    int countbooks(int p){
        if(price<p) return 1;
        else return 0;
    }
    bool isbookpresent(char n){
        if(name==n) return true;
        else return false;
    }
};
int main(){
    book english;
    english.name='e';
    english.price=100;
    english.noOfpages=200;
    book maths;
    english.name='m';
    english.price=300;
    english.noOfpages=1000;
    book science;
    english.name='s';
    english.price=400;
    english.noOfpages=2000;
    cout<<english.countbooks(100)<<endl;
    cout<<english.isbookpresent('e');

}