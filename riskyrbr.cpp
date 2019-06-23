#include<iostream>
using namespace std;
int& return_ref(int &x){
    int t = x;
    ++t;
    return(t); // with fucntion termiantion t disappears! 
    // but we are returning its reference! variable has disappeareed by its reference is still there :O :O
} // this will be shown up as a warning


int main(){
    int a = 10,b;
    b = return_ref(a);
      cout<<"a = "<< a<< " "<< "b = "<<b;
      return_ref(a) =  3;
      cout<<"a = "<<a;
      return 0;

}


//output: segmentation fault expected! the buggy rbr!
///if you're reuring by ref never return a local variable