#include<iostream>
#include<string>
using namespace std;
class Bank{
    string dipositor;
    int accno;
    string acctype;
    int balance; 
    public:
    Bank(string d,int a,string at,int b){
        dipositor=d;
        accno=a;
        acctype=at;
        balance=b;
    } 
    int get(Bank p){
        cout<<"name of dipositer  "<<p.dipositor<<endl;
        cout<<"account number of dipositor  "<<p.accno<<endl;
        cout<<"accout type  "<<p.acctype<<endl;
        cout<<"bank balance of dispositor   "<<p.balance<<endl;
    }
    void deposit(double amount){
        if(balance>0){
            balance+=amount;
            cout<<"deposited successfully   "<<balance<<endl;
        }
        else cout<<"invalid amount"<<endl;
    }
    void withdraw(double withdraw){
        if(balance>0){
            balance-=withdraw;
            cout<<"amount withdrawn  "<<endl;
            cout<<"amount  left  "<<balance<<endl;
        }
        else cout<<"invalid amount"<<endl;
    }
    void display(){
        cout<<"name of depositor"<<dipositor<<endl;
        cout<<"available balance"<<balance<<endl;
    }
};
int main(){
    Bank p1("supriya",1234,"sbi",100000);
    Bank p2("anjali",123,"hdfc",2000);
    Bank p3("shimpy",12,"pnb",3000);
    p1.get(p1);
    p1.deposit(2000);
    p1.withdraw(1000);
    p1.display();
    cout<<endl;
    p2.get(p2);
    p2.deposit(500);
    p2.withdraw(100);
    p2.display();
    cout<<endl;
    p3.get(p3);
    p3.deposit(300);
    p3.withdraw(1000);
    p3.display();
}