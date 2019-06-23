#include<iostream>
#include "String.h"
#include "Date.h"

using namespace std;

class Name{
string firstName_, lastName_;
public:
    Name(const char* fn, const char* ln): firstName_(fn), lastName_(ln)
    {cout<<"Name Ctor: "; print(); cout<<endl; }
    ~Name(){cout<<"Name dtor: "; print(); cout<< endl;}
    void print(){
        firstName_.print(); cout<<" "; lastName_.print();
    }
};

class Address{
unsigned int houseNo_;
string street_, city_, pin_;
public:
    Address(unsigned int hn, const char* sn, const char* cn, const char* pin):
    houseNo_(hn),street_(sn), city_(cn), pin_(pin)
    
    {
        cout<<"Address ctor: "; print(); cout<<endl;
    }
    ~Address(){cout<< "Address Dtor: "; print(); cout<<endl;}
    void print(){
        cout<<houseNo_<<endl;
        cout<<street_.print()<<endl;
        cout<<city_.print()<<" ";
        cout<<pin_.print(); 
    }
};

class CreditCard{

    typedef unsigned int UINT;
    char cardNumber_[17];
    Name holder_;
    Address addr_;
    __DATE__ issueDate_; expiryDate_;
    UINT cvv_;
    
    public:
        CreditCard(const char* cNumber, const char* fn, const char* ln, unsigned int hn, const char* sn, const char* cn, const char* pin, UINT issueMonth, UINT issueYear, UINT expiryMonth, UINT expiryYear, UINT cvv):
            holder_(fn,ln), addr_(hn,sn,cn,pin), issueDate_(1,issueMonth, issueYear), 
            expiryDate_(1, expiryMonth, expiryYear), cvv_(cvv){

                strcpy(cardNumber_, cNumber); cout<<"CC Ctor: "; print(); cout<< endl; 
            } 
        ~CreditCard() {

            cout<< "CC Dtor:  "; print(); cout<< endl;
        }   
        void print(){
            cout<< cardNumber_<<" ";
            holder_.print(); cout<< " ";
            addr_.print(); cout<<" ";
            issueDate_.print()<<" ";
            expiryDate_.print()<<" ";
            cout<< cvv_;
    }
};