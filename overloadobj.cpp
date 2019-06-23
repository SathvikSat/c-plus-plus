#include<iostream>

using namespace std;

//complex conjugate (!)
class complex{

    public:
        double re, im;



    complex operator+(const complex &c){
        complex r;
        r.re = re + c.re;
    }




};
complex operator+(complex& a, complex&b){
    complex r;
    r.re = a.re + b.re;
    return r;
}

int main(){

    complex d, d1, d2;
    d1.re = 10; d2.re = 20;
    d = d1 + d2;

    //obj c3 = c2 + c1;
    

}