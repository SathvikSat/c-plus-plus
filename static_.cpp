//static data members and member fuctions
// data members can be accessted by member func or  pointer of obj
// are not associated with obj rather class, only one instance shared by all obj of class, exists even when no obj is  created, purpsr maintain data specific to class and not ofr obj
//declarred within class, defined outsideclass in a src file
//dtactic mem is obj; its get constructed before main fucn starts !
//accessed from class name
//behave like global var but within scope of class
 //elimiate requremnt o f global var
 #include<iostream>
 using namespace std;
  class MyClass{
      static int x;
      public:
        void get(){
            x  = 15;
        }
        void print(){
            x = x + 15;
            cout<<"x = "<< x <<endl;
        }
  };
  int MyClass::x = 0;//mem binding constructed and initalised
  int main(){
      MyClass obj1, obj2;
      obj1.get(); obj2.get();
      obj1.print();
      obj2.print();
      return 0;
  }//destructed here in reverse order