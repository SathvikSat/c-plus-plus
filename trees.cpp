#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *lt;
    node *rt;
};


node* create(int num){
    node *q = new node;
    q->data = num;
    q->lt= q->rt= NULL;
    return q;
}

void insert(node* &root , int num)
    if(root == NULL){root = create(num);
    else if(num>root->data) insert(root->rt, num);
    else insert(root->lt, num);
    
    }

void display(node *root){
    if(root !=NULL){
        display(root->lt);
        cout<<root->data;
        display(root->rt);
    }
}

bool search(node * &root, int num){
    if(root == NULL) return false;
    if(root->data==num) return true;
    else if(num<=root->data) return search(root->lt, num);
    else if(num>=root->data) return search(root->rt, num);
}


int main(){
    node *root = NULL;
    for(int i  =0; i< n; i++){
        cin>>n; insert(root , num);
    }
    return 0;
}