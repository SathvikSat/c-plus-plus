#include<iostream>
#include<cmath>
using namespace std;

class complex {
    private:
        double re, im;
        
          public:
        complex(double re, double im): re(re), im(im){}
        complex(double re): re(re), im(0.0){}
        complex(): re(0.0), im(0.0){}
  
        double norm(){
            return sqrt(re*re+ im*im);
        }        
        void print(){
            cout<<norm()<<endl;        
            }
};

int main(){
    complex c1(1.1);


   // c1.complex(1.1,2.3);


    c1.print();

    //c1.print();

    //c3.print();

    return 0;
}