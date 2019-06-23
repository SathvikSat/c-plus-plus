#include<iostream>
using namespace std;
int& return_ref(int &x){
    return(x);
}

int main(){
    int a = 10, b; // here b is not an alias to x!
    b = return_ref(a);
    cout<<"a = "<< a<< " "<< "b = "<<b<<" "<<"&a= "<<&a <<" "<<"&b = "<<&b<<endl;
    return_ref(a) = 3; //this is valid coz, reutrun tupe is addr for which a value can be aasiged

     cout<<"a = "<< a<< " "<< "b = "<<b<<" "<<"&a= "<<&a <<" "<<"&b = "<<&b<<endl;

    return 0;

}