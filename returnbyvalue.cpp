#include<iostream>
using namespace std;

int fucn_return_by_val(int &x){
    cout<<"x = "<<x<<"  &x = "<<&x<<endl;
    return(x); //returning a cpoy of x which is stored in b new temporqary address
}

int main(){
    int a = 10;
    cout<<"a = "<<a<<"  &a= "<< &a<<endl;
    const int& b = fucn_return_by_val(a); //const is required as reference var rules

    cout<<"b = "<<b<<" &b = "<<&b<<endl;
    return 0;

    ///b and a have different address!

}