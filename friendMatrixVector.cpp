#include<bits/stdc++.h>
using namespace std;

class Vector{ int e_[3], n;
public:
Vector(int x): n(x){
    for(int i = 0; i< n; ++i)
        e_[i] = i +1;
}

void clear(){
    for(int i =0; i<n; i++){
        cout<<e_[i]<<" ";
    }
    cout<<endl;
}
friend Vector prod(Matrix *pm,vector *pv);

};

class Matrix{
int e_[3][3], int m, n;
public:

    Matrix(int m1, int n1): m(m1), n(n1){
        for(int i = 0; i< m; i++){
            for(int j = 0; j < n; j++)
            {
                e_[i][j] = i + j;
            }
            
        }
    }

    void show(){
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout<<e_[i][j];<< " "; /* code */
            }
        }
        cout<<endl;
    }
friend Vector prod(Matrix *pm, Vector *pn);

};



Vector prod(Matrix *pm, Vector *pn){
    




}