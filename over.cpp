// how is it benifit, the overload?

#include<iostream>
#include<cstring>
using namespace std;

string operator+(const string& s1, const string& s2){
    string s;
    s.str = (char *) malloc(strlen(s1.str) + strlen(s2.str) + 1);
    strcpy(s.str, s1.str);
    strcat(s.str, s2.str);
    return s;
}


main(){

    name = fname + lname;
}