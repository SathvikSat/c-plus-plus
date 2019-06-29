//This is The Coding Area
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1, n2;
    cin>>n1 >> n2;
    vector<int> prime;
       // int j =0;  
         int x = 0;
      for(int i = n1;i <= n2; i++)
       {
           for(int j=2; j <= sqrt(i); j++)
               {
               if(i%j==0)
                  x++;
               }
               if(x == 0)
               { 
                prime.push_back(i);
                x=0;
               }
               x=0;
       }

vector<int> newprime;
unsigned  int num1,num2,j;
 unsigned int count1 = prime.size();
  for(unsigned int i = 0; i< prime.size(); i++){
        
        num1 = prime[i];
      for(unsigned j = 0; j<prime.size(); j++){
          if( i == j){
              if(i  == count1 -1 ){
                  break; 
              }
              j++;
          }
          num2 = prime[j];
          do{
                num1 *= 10;
                num2 /= 10;
          }while(num2);
             newprime.push_back(num1+prime[j]);
             num1 = prime[i];
        }
   
  }
    //for(long int i = 0; i < newprime.size(); i++)
      //  cout<<newprime[i]<<" ";


   

  vector<int> secprime;
       // int j =0;  
         int x2 = 0;
        int i = 0;        
      for(unsigned int i2 = 0; i2 < newprime.size(); i2++)
       {
           for(int j=2; j <= sqrt(newprime[i2]); j++)
               {
               if(newprime[i2] % j == 0)
                  x2++;
               }
               if(x2 == 0)
               { 
                secprime.push_back(newprime[i2]);
                x2=0;
               }
               x2=0;
       }

   // cout<<endl<<endl;
    //for(long int i = 0; i < secprime.size(); i++)
      //  cout<<secprime[i]<<" ";


long int f1 ,f2;
f1 = secprime[0];
long int count = secprime.size();
f2 = secprime[count - 1];
long int fib[count];
//cout<<f1<<" "<<f2<<" "<<count;
long int f3 = 0;
fib[0] = f1;
fib[1] = f2;
for(int i = 2; i<count; i++){
f3 = f1 + f2;
fib[i] = f3;
f1 = f2;
f2 = f3;

}

    //cout<<endl<<endl;
  
    //for(long int i = 0; i < count; i++)
      cout<<fib[count - 1];
  


    return 0;

} 