#include<iostream>
#include<string>
using namespace std;



int main(){




    int x = 5;
    int y = 6;
    int *p;
     p = &x;
    // p = &y;
     int &r = x;

     cout<<p<<endl<<*p<<endl<<&r<<endl<<r<<endl;
}
