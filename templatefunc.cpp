//generic programming
//templates ? need ? meta program which generates anothe rprog while compilation 
//parameterized by type ; Motivation: to increase code reuse. 
//Usually function is overloaded, tho algo is same; but c++ is strongly typed.
//code duplication, isn't it? 
//catch is for aevery new type it needs to ve defined again
//#deifne aka macro is there in c. but, this leads to different  problems
//code duplication solution 


#include<bits/stdc++.h>
using namespace std;
// template: is a func where type is parameterised



template<class T> //general
T Max(T x, T y){

    return x > y ? x : y; 
}

template<> //for string instead of only first character!
char *Max<char *>(char *x, char *y){
    return strcmp(x, y)> 0 ? x: y;
}

template<class T, int size>  //array; non-type should only int type;
T Max(T x[size]) { T t = x[0];]
for(int i = 0; i < size; i++){
    if(x[i] > t){
        return x[i];
    }
}
}


class Complex{
double re_, im_;
public:
    complex(double re =0.0, double im = 0.0):re_(re), im_(im){};
    /*.................*/

}; 


int main(){
    int a = 3, b= 5, iMax;
    iMax = Max<int>(a,b); 
    double c =2.1, d = 1.1, dMax;
    dMax = Max<double>(c,d);

    cout<<iMax<< "******"<<dMax;

//or Max(a,b); or Max(c,d) or Max<double>(a,c), but not Max(a,c);
    




    return 0;

}