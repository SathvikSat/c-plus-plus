#include<iostream>
using namespace std;

    //class name defines a namespace

class stack  //class keyword, class name, class has datamemebrs
{
private:
    /* data */
public:
    char data[100];
    int top;
   
}; //class is an aggreate of different data members

int main(){
 // s is object of class stack or instance
    stack s;
    s.top = -1; //implie stack is empty

    //push, pop, empty
    return 0;
}