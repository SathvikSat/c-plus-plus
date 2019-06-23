#include<bits/stdc++.h>
using namespace std;

class dll{
    struct node
    {
        int data;
        node *next;
        node *prev;

    }
    *p, *r;

    dll(){
       p = NULL;
    }
    
    add(int num){
        node *q;
        if(p == NULL){
            q = new node;
            q->data = num;
            q->next = NULL;
            q->prev = NULL;
        p = q;
        }

        else
        {
            /* code */
        }
        
    }
};








int main(){

    return 0;
}