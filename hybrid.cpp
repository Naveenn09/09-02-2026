#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"Constructor of Class A"<<endl;
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
class C:public A{
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
class D:public virtual B,public  virtual C{
    public:
    D(){
        cout<<"This is Class D Constructor"<<endl; 
    }
    void display_D(){
        cout<<"This is Class D"<<endl;
    }
    ~D(){
        cout<<"This is Class D Destructor"<<endl; 
    }
};  
int main(){
    D d;
    d.display_B();
    d.display_C();
    d.display_D();

    return 0;       
}