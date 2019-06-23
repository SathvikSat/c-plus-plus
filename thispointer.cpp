#include<iostream>
using namespace std;
class test{
    public:
    int x;
    
    void setX(int x){
      this->  x = x;
    
    }
    void print(){
        cout<<"x ="<<x<<endl<<this;
    }
};
int main(){

    test obj;
    int y =20;
    obj.setX(y);
    obj.print();
    cout<<endl<<&y<<endl;
    return 0;
}