#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>> n;
    int x = pow(2, n);
    int *p = new int[x] ;
    cout<<sizeof(x)<<" "<<sizeof(n)<<" "<<x;
    delete[]  p;

    return 0;
}