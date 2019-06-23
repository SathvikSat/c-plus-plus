#include<iostream>
using namespace std;

class sll{
struct node
{
    int val;
    node *link;
 
 } *p;
public:
    sll();
void add(int num){
    node *t;
    if(p == NULL){
    t = new node;
    t->val = num;
    t->link = NULL;
    p = t;
    }
    else
    {
        while()
    }
    

}
    
    
void addint(int loc, int num){
        node *r, *t;
        for(int i = 0; i< loc; i++){
            t = t->link;
        }
            r = new node;
            r->val = num;
            r->link = t->link;
            t->link = r;
    
}   


void disp(){
        node *t =p;

        while()   
            cout<<p->val;
            

        
    }

};

sll::sll(){
    p = NULL;
}


int main(){
    sll a;
    a.add(5);
    a.add(5);
    a.add(5);
    a.add(5);
    a.add(5);
    a.add(5);
   // a.addint(2,10);
    return 0;
}