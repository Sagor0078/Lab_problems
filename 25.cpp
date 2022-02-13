/*
   Runtime Polymorphism / dynamic binding
   is also called function Overriding(using virtual functions) (^__^)
*/

#include<bits/stdc++.h>
using namespace std;
class Base{
public:
    virtual void fun(){
       cout<<"Base"<<"\n";
    }
};
class Derived : public Base{
 public:
    void fun(){
       cout<<"Derived"<<"\n";
    }
};
int32_t main(){
    Base *b = new Derived;
    b->fun();
    return 0;
}

