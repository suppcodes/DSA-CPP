#include<iostream>
using namespace std;
class lab{
    int* arr;
    int size;
    public:
    lab(){}
    lab(int s){
        size=s;
        arr= new int[size];
    }
    void set_arr(){
        cout<<"enter elements of array\n";
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }
    void small(){
        int min=arr[0];
        for(int i=1;i<size;i++){
            if(min>arr[i])
             min=arr[i]; 
        }
        cout<<"smallest element \n"<< min;
    }
};
int main(){ 
    int n;
    cout<<"enter size of array";
    cin>>n;
    lab a(n);
    a.set_arr();
    a.small();
}