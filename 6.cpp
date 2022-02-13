#include<bits/stdc++.h>
using namespace std;
const int m = 3;
class Student{
public:
    int roll;
    string name;
    double mark;
    void getdata(){
         cout<<"Students Roll : "<<"\n";
         cin>>roll;
         cout<<"Students name : "<<"\n";
         cin>>name;
    }
    void putdata(){
         cout<<"The Students roll number : "<<roll<<"\n";;
         cout<<"The students name : "<<name<<"\n";
    }
};
class marks : public Student{
public:
    int per;
    array<int,3> arr;
    void input(){
         getdata();
         cout<<"Enter All subjects Marks: ";
         for(int i=0;i<3;i++){
            cin>>arr[i];
         }
    }
    void output(){
         putdata();
         cout<<"All Subjects Marks: ";
         for(int i=0;i<3;i++){
            cout<<arr[i]<<" ";
         }
         cout<<"\n";
    }
    void calculate(){
         per = (arr[0]+arr[1]+arr[2])/3;
         cout<<"Total Percentage : "<<per<<"\n";
         if(per>=80){
            cout<<"GRADE : A+"<<"\n";
         }else if(per>75 && per<80){
            cout<<"GRADE : A"<<"\n";
         }else{
            cout<<"GRADE : FAIL"<<"\n";
         }
    }
};
int main(){
    marks m1;
    m1.input();
    m1.output();
    m1.calculate();
    return 0;
}
