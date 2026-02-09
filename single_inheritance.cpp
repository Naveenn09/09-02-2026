#include<iostream>
using namespace std;
class vehicle{
    public:
    vehicle(){
        cout<<"This is Vehicle Constructor"<<endl;
    }
    void display_vehicle(){
        cout<<"This is a Vehicle"<<endl;
    }
    ~vehicle(){
        cout<<"This is Vehicle Destructor"<<endl;
    }
};
class car:public vehicle{
    public: 
    car(){
        cout<<"This is Car Constructor"<<endl;
    }
    void display_car(){
        cout<<"This is a car"<<endl;
    }
    ~car(){
        cout<<"This is Car Destructor"<<endl;
    }
};
int main(){
    car c;
    c.display_vehicle();
    c.display_car();
    return 0;       
}