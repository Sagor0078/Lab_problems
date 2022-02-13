#include<bits/stdc++.h>
#include<fstream>
using namespace std;
struct Students
{
    int roll,marks;
    char name[50];
}stu[100],t;

int32_t main(){
    fstream in("student.txt");
    for(int i=0;i<3;++i){
        in>>stu[i].roll>>stu[i].name>>stu[i].marks;
    }
    for(int i=0;i<3;++i){
        for(int j=0;j+1<3;++j){
            if(stu[j].marks<stu[j+1].marks){
                swap(stu[j],stu[j+1]);
            }
        }
    }
    for(int i=0;i<3;++i){
        cout<<stu[i].roll<<" "<<stu[i].name<<" "<<stu[i].marks<<"\n";
    }
    return 0;
}
