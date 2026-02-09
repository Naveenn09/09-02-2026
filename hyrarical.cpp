#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"Constructor of A"<<endl;
    }
    void display_A(){
        cout<<"This is A class display"<<endl;
    }
    ~A(){
        cout<<"This is A destructor"<<endl;
    }
};
class B:public A{
    public:
    B(){
        cout<<"Constructor of B"<<endl;
    }
    void display_B(){
        cout<<"This is class B display"<<endl;
    }
    ~B(){
        cout<<"This is B destructor"<<endl;
    }
};
class C:public A{
    public:
    C(){
        cout<<"This is C Constructor"<<endl;
    }
    void display_C(){
        cout<<"This is C display"<<endl;
    }
    ~C(){
        cout<<"This is C destructor"<<endl;
    }
};
int main(){
    B Bobj;
    Bobj.display_A();
    Bobj.display_B();

    C Cobj;
    Cobj.display_A();
    Cobj.display_C();

}
