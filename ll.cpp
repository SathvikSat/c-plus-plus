#include<bits/stdc++.h>
using namespace std;

class sll{
    
    private:

    struct node
    {
        int data;
        node *next;
    }*p;
    
    public:
    sll(){
        p = NULL;
    }

    void add(int num){
        node *q,*t;
          if(p == NULL)
          q = new node;
          q->data = num;
          q->next = NULL;  
        
          //  q->next = NULL;
            p = q;
        else
        {
          t = new node;
          t->data = num;
          q->next = t;
          q = q->next;
          t->next = NULL;

        }
     }

    void addbtw(int num, int loc){
        node  *a, *b;
        b = p;
        for(int i = 0; i< loc-1; i++){
            b = b->next;
        }
        a = new node;
        a->data = num;
        a->next = b->next;
        b->next = a;

        
    }
    void addbeg(int num){
        node *c;
        c->data = num;
        c->next = p;
        c = p;

    }

    void del(int dloc){
        node *d, *e;
        d = p;
        for(int i = 0; i< dloc-1; i++){
            d = d->next;
        }
        e = d->next;
        d->next = e->next;
        delete e;
    }

    void delall(){
        node *n;
        n =p;
        while(n != NULL){
            p = n->next;
            delete n;
            n = p;
        }
    }

    void disp(){
        node *a;
        a = p;
            while ( a != NULL)
            {
                cout<<a->data<<" ";
                a = a->next;
            }
            
    }


};



int main(){


    return 0;
}