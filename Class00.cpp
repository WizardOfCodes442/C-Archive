#include <iostream>

using namespace std;

class Box {
    public:
        double length; //length of the box
        double breadth; //breadth of the box;
        double height; //height of the box
};

int main (){
    Box box1;  //declare box1 of Type Box
    Box box2; //declare box2 of Type Box
    double volume =0.0;

    //box1 specification
    box1.height = 5.0;
    box1.breadth =7.0;
    box1.length = 6.0;

    //box2 specification
    box2.height = 10.0;
    box2.length = 11.0;
    box2.breadth = 12.0;

    // volume of box1
    volume = box1.height * box1.breadth * box1.length;
    cout <<"Volume of box1 is : " << volume<<endl;;

    //volume of box2
    volume = box2.breadth * box2.height * box2.length;
    cout<<"Volume of box2 is : " << volume <<endl;

    return 0;

}