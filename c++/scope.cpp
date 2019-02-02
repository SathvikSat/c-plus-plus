#include<iostream>
//#include<iomanip>
using namespace std;

int a = 15;
 main(){

int a =25;
	{
		int b = a;
		int a =35;
		cout<< "in inner block: "<<endl;
		cout<< "b = "<<b<<endl;
		cout<<"a= "<<a<<endl;
		cout<<"::a = "<<::a<<endl;
		}
		
	cout<<"outer block"<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"::a ="<<::a<<endl;
	return 0;	

}
