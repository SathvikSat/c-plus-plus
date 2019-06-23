#include<bits/stdc++.h>
using namespace std;

//friend function
class Myclass{
    int data_;
public:
    Myclass(int i): data_(i){}

    friend void display(const Myclass& a);
    
    };

    void display(const Myclass& a){
        cout<<"data: "<<a.data_ ;   }


        int main(){


            Myclass obj(10);
            display(obj);
            return 0;
        }