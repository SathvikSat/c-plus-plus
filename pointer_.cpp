#include<iostream>
using namespace std;

int main(){
    
    int firstvalue = 5, secvalue =15;
    int *p1, *p2;
    p1 = &firstvalue;
    p2 = &secvalue;

    cout<<p1<<endl<<p2<<endl<<*p1<<endl<<*p2;

    *p1 = 10;
    *p2 = *p1;

    cout<<"modified: "<<*p1<<endl<<*p2<<endl<<p1<<endl<<p2<<endl;

    p1 = p2;

    cout<<"new: "<<p1<<endl<<p2<<endl<<*p1<<endl<<*p2<<endl;

    *p1 = 20;
    cout<<*p1<<endl<<*p2;
    
    return 0;
}