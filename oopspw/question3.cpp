#include<iostream>
using namespace std;
class cricketer{
    public:
    char name;
    int age;
    int noOfTestmatches;
    int avgrun;
};
int read(cricketer a){
    
        cout<<a.name<<endl;
        cout<<a.age<<endl;
        cout<<a.noOfTestmatches<<endl;
        cout<<a.avgrun<<endl;
    
}
int main(){
    cricketer sachin;
    sachin.name='s';
    sachin.age=50;
    sachin.noOfTestmatches=100;
    sachin.avgrun=1000;
    cricketer dhoni;
    dhoni.name='d';
    dhoni.age=40;
    dhoni.noOfTestmatches=50;
    dhoni.avgrun=500;
    cricketer virat;
    virat.name='v';
    virat.age=30;
    virat.noOfTestmatches=20;
    virat.avgrun=2000;
    cricketer players[3]={sachin,dhoni,virat};
    int i;
    for(i=0;i<=3;i++){
        read(*i)
    }
    // read(sachin);
    // read(dhoni);
    // read(virat);
 }