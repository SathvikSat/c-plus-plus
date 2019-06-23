#include<iostream>
#include<cmath>
using namespace std;
class stack{
private:
    char *data_ ; int top_ ;
    public:
        stack();
        ~stack();
};
stack::stack(): data_(new char[10]), top_(-1){
    cout<<"stack called"<<endl;
}
stack::~stack(){
    cout<<"deleted!"<<endl;
}



int main(){
    stack s;


    return 0;
}