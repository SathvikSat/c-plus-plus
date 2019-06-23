#include<bits/stdc++.h>
using namespace std;

class queue(){
    struct {
        int data;
        node *link;

    }*f, *r;
    public:
        queue(){
            f = r= NULL;
        }

        void add(int num){
            node *t;
            t = new data;
            t->data = num;
            t->link = NULL;
            if(f == NULL){

                f = t;
                r = t;
            }
            else{

                r->link = t;
            }

void del_disp(){
    node *b = f;
    int c = 0;
    while(b !=NULL){
        cout<<b->data;
        b = b->link;
        delete f;

        c++;
        f = b;
    }
    cout<<c;
}


        }
    
}


int main(){

    return 0;
}