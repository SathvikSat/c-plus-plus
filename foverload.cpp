#include<iostream>
using namespace std;

//function overloading or static polymorphism

//different functions using same algo, may b different argumnts etc, eg: matrix multipliation
//paramters are diff ; dame func name


typedef struct {int data[10][10]; } Mat;
typedef struct {int data[1][10]; } Row Vector;
typedef struct {int data[10][1]; } Column Vector;


void Multiply(const Mat& a, const Mat& b, Mat& c){
    c = a * b;
};

void Multiply(const Row, Column)
//based on paramter match it is invoked accordingly
//binding happends at compile time
