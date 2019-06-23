#include<iostream>
using namespace std;

class stack{
public:
char data[100]; int top_;

bool empty(){
 return (top_ == -1);
}

char top(){
    return(data[top_]);
}

void push(char x){
    data[++top_] = x;
}

void pop(){
    --top_;
}
};
int main(){
    stack s;
    s.top_ = -1;
    int i;
    char str[10] = "ABCDE";
    for(i=0; i< 5; i++){
        s.push(str[i]);
    }

    cout<<"reversed string: "<<endl;
    while(!s.empty()){

        cout<<s.top();
        s.pop();
    }

    return 0;
}