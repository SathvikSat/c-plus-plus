#include<iostream>
using namespace std;

class complex{
    public:
    double re_, im_;
    double get_re() { return re_; }
    void set_re(double re){ re_ = re; }
    double get_im() { return im_;}
    void set_im(double im){ im_ = im;}


};

int main(){

    complex c = {4.2, 3.0};
    c.set_re(6.4);
    c.get_re();

    return 0;
}