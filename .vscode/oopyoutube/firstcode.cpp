#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    float sgpa;
    string branch;
    Student(string s,int r,float sg,string b){
        name= s;
        roll =r;
        sgpa =sg;
        branch =b;
    }
    Student(string s,int r,float sg){
        name= s;
        roll =r;
        sgpa =sg;
    }
};
void print(Student s){
    cout<<s.name<<" "<<s.roll<<" "<<s.sgpa<<" "<<s.branch<<endl;
}
int main(){
    Student s1("supriya", 24 ,7.34 , "cse");
    // s1.name = "supriya";
    // s1.roll = 24;
    // s1.sgpa =7.34;
    // s1.branch ="cse";
    Student s2("komal" , 47, 6.8);
    // s2.name = "komal";
    // s2.roll = 47;
    // s2.sgpa =6.8;
    // s1.branch ="cse";
    Student s3("muskan",53,7.89,"cse");
    // s3.name = "muskan";
    // s3.roll = 53;
    // s3.sgpa =7.89;
    // s3.branch ="cse";
    print(s1);
    print(s2);
    print(s3);
}