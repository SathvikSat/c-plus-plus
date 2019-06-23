#include<iostream>
//#include<iomanip>
using namespace std;

int main(){


int *pa = new int;
int *pb = new int;
int *psum = new int;
cout<<"enter two numbers: "<<endl;
cin>>*pa>>*pb;
*psum = *pa + *pb;
cout<<*psum<<endl;
delete pa;
delete pb;
delete psum;
cout<<&pa<<endl;
cout<<*pa<<endl;
cout<<pa<<endl;


return 0;
}
