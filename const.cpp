#include<iostream>
#include<cmath>
using namespace std;

class complex{
    private: 
        double re, im;

    public: 
    complex(double re = 0.0, double  im = 0.0):
        re(re), im(im)
        {}
        double norm(){
            return sqrt(re*re + im * im);
        }
        void print(){
            cout<<norm()<<endl;
        }
};




int main(){
    complex c1(2.2), c2(1.1,2), c3;

    c1.print();
    c1.print();
    c3.print();
    return 0;
}