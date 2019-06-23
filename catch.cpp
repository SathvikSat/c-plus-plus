
//factorial using multiple catch

#include<iostream>
using namespace std;

int fact(int);

int main(){
int a;
cout<<"enter a: ";
cin>>a;

try
{
    if(a < 0)
        throw(a);
//    if(sizeof(n) > 4)
   //     throw(a);
    if( a > 25)
        throw("Size is large to dispaly");
    
    
    
    int f = fact(a);
    cout<<f;


}
catch(const int e)
{
    std::cerr <<"cannot fine factorial of it"<< '\n';
}

catch(const char* c){
    std::cerr<<c;
}




}
int fact(int s){
    if(s == 0){
        return 1;

    }
    else
    {
        return s * fact(s-1);
    }
    
}