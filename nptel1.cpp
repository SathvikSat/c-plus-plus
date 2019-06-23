//Object oriented
/*  class == UDT
 namespace: class name 
class vs struct //struct only allows aggregation unlike class
access specifiers
class is a blue print, object instance of a class
every object has seperate identity
' . ' operator
object has a special pointer called "this pointer" ans is passsed to every method
*/
#include<iostream>
//#include"complex.h" //you could also do this!
using namespace std;

 class complex{
 //class complex
     public:
     double re,im; //data members
 };


int main(){

complex n1 ={3.1, 4.5};
cout<<n1.re<<" "<<n1.im;
return 0;
}

