#include<iostream>
using namespace std;

class salary{

    protected:
        float salary;
    public:
        float get_salary() {

            cout<<"Enter your  Salary:  "<<endl;
            cin>>salary;
            return  salary;       
        }   
};

class incometax{
    protected:
        float tax;
    public:
        float income_tax(float S){
            if(S < 50000){
                tax = 0;
            }
            else if(S > 50000 && S< 100000){
                tax = (S - 50000) * 20/100;
            }
            else
            {
                    tax = (S - 100000)* 20/100;
            }
            
         return tax; 
        }   
       
};

class net{
    private:
        float TAX, SAL;
    protected:
        float net1;
    public:    
        float net_(float TAX, float SAL){
            net1 = SAL - TAX;
            return net1;
            
        }

};

class compute: public salary, public incometax, public net{
    private:
        float S;
        float T;
        float Net;


    public:
        compute(){
            float S= get_salary();
            float T  = income_tax(S);
            float Net =  net_(T,S);
        }

        void get_tax(){
            cout<<T<<endl;
        }
        void get_net(){
            cout<<Net<<endl;
        }
};




int main(){
    compute c1;
    c1.get_tax();
    c1.get_net();

    return 0;
}