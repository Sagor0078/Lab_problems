/*
  A pure virtual function (or abstract function)
   in C++ is a virtual function for which we can have implementation,
  But we must override that function in the derived class
*/

#include<bits/stdc++.h>
using namespace std;
class Base{
public:
    virtual void fun() = 0; ///A pure virtual function is declared by assigning 0 in declaration
};
class Derived : public Base{
   public:
       void fun(){
          cout<<"In derived \n";
       }
};
int32_t main(){
    Base *ptr = new Derived();
    ptr->fun();
    return 0;
}
