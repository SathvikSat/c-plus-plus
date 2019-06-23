#include<iostream>
#include<string>
using namespace std;

class student{
public: 
string name;
int age;
int year;
int semester;
int marks[6];
    
};
int main(){
    int obtained[6] = {1,2,3,4,5};
    student sat;
   // student shiv;
    sat.name = "sathvik";
    sat.age = 12;
    for(int i = 0; i<6; i++){

        sat.marks[i] = obtained[i];
    }
    for(int i = 0; i<6; i++){
        cout<<sat.marks[i]<<endl;
    }

  cout<<sat.name<<sat.age<<endl;
    return 0;
}