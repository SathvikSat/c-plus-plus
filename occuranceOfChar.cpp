#include<iostream>
#include<string>
using namespace std;
int main(){

string s;
char a;
int x =0;
cout<<"enter string"<<endl;
cin>>s;
cout<<"enter a charcter: "<<endl;
cin>>a;
for(int i = 0 ; i< s.length(); i++){
    
    if(s[i] == a){
        x++;
    }
}
cout<<x<<endl;


}