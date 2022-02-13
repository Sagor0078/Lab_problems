/*
  concept : virtual function
  like UB -> undefined Behaviour k overried korar jonno use kora hoi
  hudai (^__^)
*/
#include<bits/stdc++.h>
using namespace std;

class BaseClass{
public:
    int var_base = 89;
    virtual void display(){ /// virtual function
       cout<<"1 Displaying base class variable var_base : "<<var_base<<"\n";
    }
};
class Derivedclass : public BaseClass{
public:
    int var_derived = 90;
    void display(){
       cout<<"2 Display Base class variable var_base : "<<var_base<<"\n";
       cout<<"2 Display Base Derivedclass variable var_base : "<<var_derived<<"\n";
    }

};
int32_t main(){
    BaseClass* base_class_ptr;
    BaseClass obj_b;
    Derivedclass obj_d;
    base_class_ptr = &obj_d;
    base_class_ptr->display();
    return 0;
}
