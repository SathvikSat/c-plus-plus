#include<iostream>
using namespace std;

int ref_const(const int &x){
    //++x; not allowed
    return(x +1);


}
int main(){
    int a  = 10;

 int   b=  ref_const(a);
    cout<<"a= "<<a<<" "<<&a<<" "<<"b = "<<b<<" "<<&b;
}