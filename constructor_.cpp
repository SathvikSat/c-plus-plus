#include<iostream>
#include<cmath>
using namespace std;

//paameteerized constructor:


class complex{
    private: double re, im;
    public:
        complex(double re, double im): re(re), im(im)
 // paramter used to initialise
{}

double norm() {
    return sqrt(re*re + im* im);
}
void print(){
    cout<<norm()<<endl;
}
};

int main(){
    complex c(4.2, 1.1), // complex::complex(4.2, 1.1)
    d = { 1.6, 2.3};  // list initialization //complex::complex(1.6 , 2.3)
c.print();
d.print();

return 0;
}

