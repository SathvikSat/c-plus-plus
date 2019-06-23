#include<iostream>
#include<vector>
using namespace std;
//#define max 100

//malloc dynamic via new
int count; // number of elemets
vector<int>  arr;
arr.resize(count); 
  int i,j,k= 3 ,count,x; //size of r
    cin>>count;
    vector<float> r; 
    r.resize(count);
    for(i = 0; i < r.size(); i++){
       cin>>r[i];
    }
    for(i= 0; i<r.size(); i++){
        cout<<r[i];
    }