#include<iostream>
using namespace std;
//return by reference

int& fucn_return_by_ref(int &x){
    //mind it int& is used!
    cout<<"x = "<<x<<" &X = "<<&x<<endl;   
    return(x );
} //address of b is same i.e addr of x was returned; copy of large struxtures is avoided


int main(){
    int a = 10;
     cout<<"a = "<<a<<"  &a= "<< &a<<endl;
    const int& b = fucn_return_by_ref(a); //const is not necessary here?! //here b is made alias of x; x is inturn alias to a so b is alias to a!!
    cout<<"b = "<<b<<" &b = "<<&b<<endl;
    return 0;

}



/*output: a = 10  &a= 0x7fff65c5373c
x = 10 &X = 0x7fff65c5373c
b = 10 &b = 0x7fff65c5373c */