#include<iostream>
using namespace std;


class shape{
protected:
    double length, breadth;

public:
    shape(double l, double b): length(l = 0.0), breadth(b = 0.0)
    {
       // cin>>l>>endl;
        //cin>>b;
    }
    
};


class rect: public shape{
    protected: 
        double area, c ,d;
        
    public: 
        rect(double x,  double y):shape( c  ,  d)
        {
            x = c;
            y = d;
            area = c * d;
            cout<<area<<endl;
        }    



};

/*class cuboid: public rect{
    private: 
     float vol, height;
    
    public: 
        cuboid(float h):  height(h) {
            vol = area * h;
            cout<< vol<<endl;
            
        }    

}; */


int main(){

    rect r1(10, 30);
   // cuboid c1(30);

}