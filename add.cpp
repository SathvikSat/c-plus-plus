#include<iostream>
using namespace std;

int Add(int a, int b){ return (a+b);}
double Add(double c, double d){ return (c + d);}

int main(){
    int x = 5, y = 6,z;
    z = Add(x,y);
    cout<<"sum = "<<z<<endl;

    double s = 1.1, v = 1.2, u;
    u = Add(s,v);
    cout<<"double sum: "<<u<<endl;
    
    return 0;
}