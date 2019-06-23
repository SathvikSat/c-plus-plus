#include<iostream>
#include<string>
using namespace std;
#define pi 3.14

class area{
    int r,l,base,h;
public: 
area(float length, float breadth){
    float recarea = length * breadth;
    
    cout<<recarea<<endl;
}
area(float radius){
    float cirarea = pi * radius * radius; 
     cout<<cirarea<<endl;
}
area(float base, float height, char x){

    float triarea =  0.5 * base * height;
     cout<<triarea<<endl;
}

};

int main(){
    int num;
 cout<<"enter cases: "<<endl;
 cin>>num;

switch(num){
case 1:{
        area a1(3);
        break;
        }
case 2: {
        area a2(2,3);
        break;
}
case 3:{        
        area a3(1,2,'t');
        break;
}
}
}