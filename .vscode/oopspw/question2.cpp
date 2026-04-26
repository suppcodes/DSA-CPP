#include<iostream>
using namespace std;
class player{
    private:
    int health;
    int score;
    int age;
    bool alive;
    public:
    void setscore(int s){
        score=s;
    }
    void setage(int a){
        age=a;
    }
    void sethealth(int h){
        health=h;
    }
    void isalive(bool a){
        alive=a;
    }
    int getscore(){
        return score;
    }
    int getage(){
        return age;
    }
    int gethealth(){
       return health;
    }
    int isalive(){
        return alive;
    }
};
int addscore(player a,player b){
    return a.getscore()+b.getscore();
}
int main(){
    player supriya;
    supriya.sethealth(100);
    supriya.setscore(1000);
    supriya.setage(16);
    supriya.isalive(true);
    player priya;
    priya.sethealth(50);
    priya.setscore(100);
    priya.setage(20);
    priya.isalive(false);
    cout<<"details of play supriya"<<endl;
    cout<<supriya.gethealth()<<endl;
    cout<<supriya.getscore()<<endl;
    cout<<supriya.getage()<<endl;
    cout<<supriya.isalive()<<endl;
    cout<<"details of play priya"<<endl;
    cout<<priya.gethealth()<<endl;
    cout<<priya.getscore()<<endl;
    cout<<priya.getage()<<endl;
    cout<<priya.isalive()<<endl;
    cout<<"sum of score of both player :"<<addscore(supriya,priya)<<endl;

}