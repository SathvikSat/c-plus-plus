#include<iostream>
using namespace std;


//objects are constructed and destructed!
//information hiding 
// interface methiod()

//run time behaviour of objct:

class stack {
    private:
        char *data_[10]; int top_;

public:
    void init(){
        top_ == -1;
    }
  int empty(){  return (top_ == -1);}
  void push(char x){ data_[++top_];}
  void pop() { --top_;} 
  char top() { return data_[top_];}

};

 //what if we dont call init at all?
  // so constructors!!

  int main(){
      char  str[10] = "ABCDE";
      stack s;
      s.init(); // clean initialization
      for(int i = 0; i< 5 ; ++i)
            s.push(str[i]);
           // s.top_  = 2; //compile err - safe
      while (!s.empty()){

          cout<<s.top(); 
          s.pop();
      }

    return 0;


  }


/*
ensured that init is always called by using constructor


class stack{
public: 
    stack() : top_(-1) {} //initialization
};


outside class:
stack:: stack(): top_(-1){cout<< "stack called";}



//dynamic allocation:

private: *data_;

// outside class:
stack::stack() data_(new char[10]), top_(-1){ cout<< "stack called"; };

*/

//constructor takes responsibility 

//constructor has this pointer , name of class, no return type not even void, it constrcutor obj and initializes, no return statement, initialization list!
// implicitly called; constrctor may have any no of parameters and can be overloaded









