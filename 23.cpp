#include<bits/stdc++.h>
using namespace std;
class Complex{
    int length,width;
public:
    void getData(){
       cout<<"The width is :"<<width<<"\n";
       cout<<"The length is :"<<length<<"\n";
    }
    void setData(int a,int b){
       width = a;
       length = b;
    }
};
int main(){
    Complex *ptr = new Complex;
    ptr->setData(1,54);
    ptr->getData();
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1,4);
    ptr1->getData();
    return 0;
}
