#include<bits/stdc++.h>
using namespace std;
class Students{
private:
    int roll;
    double percent;
public:
    void accept(){
        cout<<"Enter roll & percent : ";
        cin>>roll>>percent;
    }
    void display(){
        cout<<"Students Details : "<<"\n";
        cout<<"Roll : "<<roll<<"\n";
        cout<<"Percent : "<<percent<<"\n";
    }
};
int32_t main(){
    Students s[5];
    for(int i=0;i<5;i++){
        s[i].accept();
    }
    for(int i=0;i<5;i++){
        s[i].display();
    }
    return 0;
}
