#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"This is Class A Constructor"<<endl;  
    }
    void display_A(){
        cout<<"This is Class A"<<endl;
    }
    ~A(){
        cout<<"This is Class A Destructor"<<endl;  
    }
};
class B:public A{
    public:
    B(){
        cout<<"This is Class B Constructor"<<endl;  
    }
    void display_B(){
        cout<<"This is Class B"<<endl;
    }
    ~B(){
        cout<<"This is Class B Destructor"<<endl;  
    }
};
class C:public B{
    public:
    C(){
        cout<<"This is Class C Constructor"<<endl;  
    }
    void display_C(){
        cout<<"This is Class C"<<endl;
    }
    ~C(){
        cout<<"This is Class C Destructor"<<endl;  
    }
};
int main(){
    C c;
    c.display_A();
    c.display_B();
    c.display_C();
    return 0;
}