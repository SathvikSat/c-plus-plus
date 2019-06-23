#include<iostream>
using namespace std;

class point
{

public:
    int x;
    int y;

};
class rect
{

public:
    point tl;
    point br; //data members of rect aren't defaulti instead user defined! 

};

int main(){

rect r = {{0,2}, {5,7}};
//r.tl <-- {0,2}; r.br <-- {5,7}
//r.tl.x <-- 0; r.tl.y <-- 2;


cout<<r.tl.x<< " "<< r.tl.y; /*<<" "<<r.tl<<" "<< r.br.x<<" "<<r.br.y<<" "<<r.br<<endl;*/

return 0;

}
