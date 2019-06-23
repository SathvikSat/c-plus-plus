#include<bits/stdc++.h>
using namespace std;

class stack{
    struct node{
        int data;
        node *link;

    }*top;

    public:
    stack(){
        top = NULL;

    }

    void push(int num){
        node *t;
        t = new node;
        t->data = num;
        if(top == NULL){
            t->link = NULL;
            top = t;
        }
        else
        {
            t->link = top;
            top = t;
        }
        
    }
void pop(){
    node *t = top;
    while(top !=NULL){
        cout<<top->data;
        top = top->link;
    }
}

};



int main(){
    stack s;

    return 0;
}