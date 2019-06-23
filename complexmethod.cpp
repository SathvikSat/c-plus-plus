#include<iostream>
#include<cmath>
using namespace std;

class complex{
    public:
    double re,im;
ethod instead 
    double norm(){ /*In case of struct there is no method
    their would be a global function with parameter as void norm(complex c); complex being a struct type.*/
        return sqrt(re * re + im* im);
    }
   void  print(){ //struct print(complex c)
        cout<<"|x+ jy|="<<norm()<<endl;

    }
};
int main(){

    complex c = {4.3, 3.4};
    c.print(); //here, a method is being invoke unlike a function where c was passed as a parameter.
    //for struct function print() would be called i.e print(c); regular passing parameter technique. no dot operator will be used.
    return 0;
}


/*
note:
namespace usuage:

#include<iostream>
#include<foo.h>

using namespace std;


cout of foo or std?

 the above causes dilemma to the compilerand might give wrong results

*/