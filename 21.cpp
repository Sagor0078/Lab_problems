#include<bits/stdc++.h>
using namespace std;
struct Students{
     char name[25];
     //int marks;
     int m1,m2,m3;
}stu[100],marks[4];

string find_grade(int m){
     if(m>80) return "A+";
     else if(70<m && m<80) return "A";
     else if(60<m && m<70) return "A-";
     else if(50<m && m<60) return "B";
     else return "FAIL";
}
int32_t main(){
    //vector<int> marks(3);
    for(int i=0;i<3;++i){
        cin>>stu[i].name>>marks[i].m1>>marks[i].m2>>marks[i].m3;
    }
    for(int i=0;i<3;i++){
        int total = (marks[i].m1+marks[i].m2+marks[i].m3);
        int avrage = (marks[i].m1+marks[i].m2+marks[i].m3)/3;
        cout<<stu[i].name<<" "<<total<<" "<<avrage<<" "<<find_grade(avrage)<<"\n";
    }
    return 0;
}
