#include<bits/stdc++.h>
using namespace std;
class FirstNumber{
public:
    int first_value;
    void find(int first_value){
        cout<<"First value : "<<first_value<<"\n";
    }
};

class SecondNumber : public FirstNumber{
public:
    int second_value;
    void find(int second_value){
        cout<<"Second value : "<<second_value<<"\n";
    }
};
int main(){
    FirstNumber a;
    a.find(30);
    SecondNumber b;
    b.find(45);
    return 0;
}
