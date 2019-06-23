#include<iostream>
#include<string>
using namespace std;
inline void arith(double a, double b);

int main(){
    double a,b;
    cout<<"enter two numbers: "<<endl;
    cin>>a>>b;
    arith(a,b);

}

inline void arith(double a, double b){

    cout<<a+b<<endl;
    cout<<a * (b + b )* a<<endl;
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a/b<<endl;
}