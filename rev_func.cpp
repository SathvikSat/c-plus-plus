#include<iostream>
#include<string>
using namespace std;
string rev(string num);

int main(){
string a ;
cout<<"enter a number to reverse: "<<endl;
cin>>a;
int l = a.length();
cout<<l<<endl;
cout<<rev(a)<<endl;
return 0;
}



string rev(string num){

    string b;
    for(int i = num.length(); i>=0; i--){

        b += num[i];

    }

return b;

}