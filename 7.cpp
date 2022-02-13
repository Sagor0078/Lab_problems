#include<bits/stdc++.h>
using namespace std;
class Rectangle{
public:
    double width,length;
    double ComputeAreaSquare(){
        return length*length;
    }
    double ComputeArea(){
        return width*length;
    }
    void SetLength(double length_){
        length = length_;
    }
    void SetWidth(double width_){
        width = width_;
    }
};
int main(){
    Rectangle r1;
    r1.SetLength(10);
    r1.SetWidth(5);
    cout<<r1.ComputeArea()<<"\n";
    cout<<r1.ComputeAreaSquare()<<"\n";
    return 0;
}
