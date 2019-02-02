#include<iostream>
using namespace std;


int main(){
//celsius
	float c, f;
	cout<< "enter the farheneit temp"<<endl;
	cin>>f;
	c = (f-32) * 5/9;
	cout<< "temp in celsius: "<<c<<endl;
	return 0;
}
