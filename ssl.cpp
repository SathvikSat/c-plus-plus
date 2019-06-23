#include<bits/stdc++.h>
using namespace std;

class sll{
private:

struct node
{
   int data;
   node *next; 
}p ;

public:
    sll(){
        p = NULL;
    };
    void add(int num);
    void disp();

};


void s11:: add(int num){

    node *t, *s;
    if(p ==NULL){
        t = new node;
        t->data = num;
        t->next = NULL;
        p = t;
    }

    else
        s = new node;
        s->data = numm;
        s->next = NULL;
        t->next = s;
        t = t->next;



}




int main(){

}