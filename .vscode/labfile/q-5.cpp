#include<iostream>
using namespace std;
class train{
    public:
    int no_of_seat1;
    int no_of_seat2;
    int no_of_seat3;
    void set_seat(){
        cout<<"enter number seat in 1 class";
        cin>>no_of_seat1;
        cout<<"enter number seat in 2 class";
        cin>>no_of_seat2;
        cout<<"enter number seat in 3 class";
        cin>>no_of_seat3;
    }
    void display(){
        cout<<"number of seats in first class"<<no_of_seat1<<endl;
        cout<<"number of seats in second class"<<no_of_seat2<<endl;
        cout<<"number of seats in third class"<<no_of_seat3<<endl;
    }
};
class reservation :public train{
    int seat_booked1;
    int seat_booked2;
    int seat_booked3;
    public:
    reservation(){
    int seat_booked1=0;
    int seat_booked2=0;
    int seat_booked3=0;
    }
    void bookticket(){
        int choice;
        cout<<"enter 1 for booking in 1"<<endl;
        cout<<"enter 2 for booking in 2"<<endl;
        cout<<"enter 3 for booking in 3"<<endl;
        cin>>choice;
        switch(choice){
            case 1 :
            cout<<"enter number of ticket you want book"<<endl;
            cin>>seat_booked1;
            if(no_of_seat1<seat_booked1) cout<<"seat not available"<<endl;
            else {
                no_of_seat1=no_of_seat1-seat_booked1;
            }
            break;
            case 2 :
            cout<<"enter number of ticket you want book"<<endl;
            cin>>seat_booked2;
            if(no_of_seat2<seat_booked2) cout<<"seat not available"<<endl;
            else {
                no_of_seat2=no_of_seat2-seat_booked2;
            }
            break;
            case 3 :
            cout<<"enter number of ticket you want book"<<endl;
            cin>>seat_booked3;
            if(no_of_seat3<seat_booked3) cout<<"seat not available"<<endl;
            else {
                no_of_seat3=no_of_seat3-seat_booked3;
            }
            break;
        }
    }
    void cancelticket(){
        int choice;
        cout<<"enter 1 for cancel in 1"<<endl;
        cout<<"enter 2 for cancel in 2"<<endl;
        cout<<"enter 3 for cancel in 3"<<endl;
        cin>>choice;
        switch(choice){
            int n;
            case 1 :
            cout<<"enter number of ticket you want cancel"<<endl;
            cin>>n;
            if(seat_booked1>=n) {
                no_of_seat1=+n;
            }
            else {
                cout<<"ticket was not booked";
            }
            break;
            case 2 :
            cout<<"enter number of ticket you want cancel"<<endl;
            cin>>n;
            if(seat_booked2>=n) {
                no_of_seat2=+n;
            }
            else {
                cout<<"ticket was not booked";
            }
            break;
            case 3 :
            cout<<"enter number of ticket you want cancel"<<endl;
            cin>>n;
            if(seat_booked3>=n) {
                no_of_seat3=+n;
            }
            else {
                cout<<"ticket was not booked";
            }
            break;
        }
    }
};
int main(){
    train r
}