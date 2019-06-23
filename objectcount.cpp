#include<iostream>
#include<string>
using namespace std;


class test{
static int count, del;

public: test(){

    ++count;
}

void print(){
    cout<<count<<endl;
}
~test(){
    del++;
}
void print1(){
    cout<<del<<endl;
}


};
int test::count =0;
int test::del =0;

int main(){

    test t1, t2, t3;
    {
        test t4;
    }
    t2.print();
    t3.print1();
}