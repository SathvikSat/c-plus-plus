#include<iostream>
using namespace std;
int Area(int a , int b ){
    return(a * b);
}
int Area(int c){
    return(c * c);
}

int main(){
    int x = 10, y =12, z = 5, t;
    t = Area(x ,y);
    cout<<"Rec: "<<t;


    int u;
    u = Area(z);
    cout<<"Square: "<<u<<endl;
    return 0;
}


// not allowed just change in return type
/*
int Area(int a, int b );
double Area(int a, int b);
*/

//overload resolution & static polymorphism; static => compile time decision
