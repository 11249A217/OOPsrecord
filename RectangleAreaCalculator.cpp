#include<iostream>
using namespace std;
class Rectangle{
    int length,width;
    public:
    Rectangle(int l,int w){
        length=l;
        width=w;
    }
    inline int area(){ return length*width;}
};
int main(){
    Rectangle r1(5,4);
    Rectangle r2(10,7);
    cout<<"Area of r1:"<<r1.area()<<endl;
    cout<<"Area of r2:"<<r2.area()<<endl;
    return 0;
}
