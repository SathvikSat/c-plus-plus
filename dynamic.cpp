#include<iostream>
using namespace std;


class D{
private:
    int *a = 0;
public:
    D(int num){
            a = new int;
            *a = num;
            cout<<*a;
    }
    ~D(){
        delete a;
    }


};


int main(){
    D obj(5);
}