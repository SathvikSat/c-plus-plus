#include<iostream>
#include<cmath>
using namespace std;
class complex{
    private: 
        double re_, im_;
public: 
    complex(double re = 0.0, im = 0.0): re_(re), im_(im){
        cout<< "ctor"<<endl;
    }
    ~complex(){
        cout<<"dtor"<,endl;
    }

    void opcomplex(double i){
        re_ += i; im_ += i;
    }

    double norm(){
        return sqrt(re_*re_ + im_ *im_);
    }

    void print(){
        cout<<norm()<<endl;
    } 
};


