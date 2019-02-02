#include<iostream>
//#include<iomanip>
//#include<String>
using namespace std;

int main(){

int q = 15689, n1,n2,n3,n4,n5, n0;

	n0 = q %10;
	
	q = q/10;
	n1 =  q %10;
		
	q = q/10;
	n2 =  q %10;
		
	q = q/10;
	n3 =  q %10;
		
	q = q/10;
	n4 =  q %10;
		
	//q = q/10;
	//n5 =  q %10;	
		
	//q = q/10;
	//n6 =  q %10;
	cout<<n0<<n1<<n2<<n3<<n4<<endl;

return 0;
}
